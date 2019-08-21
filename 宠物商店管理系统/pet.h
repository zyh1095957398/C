#include<string>
#include<fstream>
#include <stdlib.h>
#include<iostream>
#include <iomanip>
using namespace std;

class Pet {
	public:
		Pet() {}
		void Set(string n,float m,string t,string o,string l,string x) {
			petname=n;
			price=m;
			tz=t;
			old=o;
			lei=l;
			xg=x;
		}
		void AddPet();//��ӳ���
		void Del();//ɾ��������Ϣ
		void search();//���ҳ�����Ϣ
		void ChangePet();//�޸ĳ��ﵥ��
		void AllPrint();//������г�����Ϣ
		void save();//���������Ϣ
		void denglupet();//��ʾ��½ҳ��
		int xianshi( ); //��ʾ���ܲ˵�
		bool Inquire(string a);
	private:
		string ID;
		string petname;//������
		string tz;//���� 
		string old;//���� 
		string lei;//����
		string price;//�۸�
		string xg;//�Ը� 
};
//��Ա������ʵ��
void Pet::AddPet() { //���ӳ��������ı���
	do {
		cout<<" *****************�����µĳ���***************** "<<endl;
		cout<<"��������ID��";
		cin>>ID;
		cout<<endl;
		if(Inquire(ID)) {
			cout<<"�����������";
			cin>>petname;
			fflush(stdin);
			cout<<"����:";
			cin>>tz;
			fflush(stdin);
			cout<<"����:";
			cin>>old;
			fflush(stdin);
			cout<<"����:";
			cin>>lei;
			fflush(stdin);
			cout<<"�Ը�:";
			cin>>xg;
			fflush(stdin);
			cout<<"�۸�:";
			cin>>price;
			fflush(stdin);
			cout<<"      ID   ��"<<ID<<endl<<"    ������ ��"<<petname<<"   �������أ�"<<tz<<endl<<"   �������䣺"<<old<<endl<<"   �������ࣺ"<<lei<<endl<<"   �����Ը�"<<xg<<endl<<endl<<"    ����۸�"<<price<<endl;
			fflush(stdin);
		} else {
			cout<<"�����ID�Ѵ��ڣ����������룡��"<<endl;
		}
	} while(!(Inquire(ID)));
	save();
	cout<<endl<<"*****************��Ϣ�ѱ���!!!*****************"<<endl;
	system("pause");
	system("cls");
}

void Pet::Del() { //ɾ��������Ϣ
	ifstream inData("pet",ios::in);
	ofstream outData("pet1",ios::out);
	if(!inData) {
		cout<<"�Բ��� �򲻿����ļ���";
		system("pause");
		return;
	}
	string str,del;
	cout<<"������Ҫɾ���ĳ���ID������:"<<endl;
	cin>>str;
	bool flag=true;
	while(inData>>ID>>petname) {
		getline(inData,del);
		if(ID==str||petname==str) {
			cout<<setiosflags(ios::left)<<setw(8)<<"����Ҫɾ���ĳ��"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"�����Ը�"<<setw(8)<<"�۸�"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<del<<endl;
			flag=false;
			continue;
		}
		outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<del<<endl;
	}
	inData.close();
	outData.close();
	if(flag) {
		cout<<"�Բ���û���ҵ���ɾ���ĳ��\n";
		system("pause");
	} else {
		ofstream outData("pet",ios::out);
		ifstream inData("pet1",ios::in);
		if(!inData) {
			cout<<"�Բ��𣬴򲻿��ļ���"<<endl;
			system("pause");
			return;
		}
		while(getline(inData,str)) {
			outData<<str<<endl;
		}
		outData.close();
		inData.close();
		cout<<"������ɾ������";
	}
	system("pause");
	system("cls");
}

void Pet::search() { //���ҳ�����Ϣ
	ifstream inData("pet",ios::in);
	if(!inData) {
		cout<<endl<<"�Բ���!!!!�ļ��Ҳ���!!!!"<<endl;
		system("pause");
		return;
	}
	string sign;
	cout<<endl<<"����������ҵĳ���ı�Ż�����: ";
	cin>>sign;
	bool flag=true;
	string str;
	while(inData>>ID>>petname) {
		getline(inData, str); /*�ַ�str�������ܳ� �������Ż�ӰƬ������֮ͬ���������Ϣ*/
		if((ID==sign)||(petname==sign)) {
			cout<<endl<<"��Ҫ���ҵĳ�����Ϣ��: "<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"�����Ը�"<<setw(8)<<"�۸�"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<str<<endl;/*�����Ҫ���ҵ��˵���Ϣ*/
			flag=false;
			continue;
		}
	}
	if(flag) {
		cout<<"û���ҵ���ĳ������";
	}
	system("pause");
	system("cls");
}

void Pet::ChangePet() { //�޸ĳ��ﵥ��
	ofstream outData("pet1",ios::out);/*����һ����Ϊpet1���ļ�����*/
	ifstream inData("pet",ios::in);/*����Ϊpet���ļ�����ȡ���������*/
	if(!inData) {
		cout<<"�Բ���!�Ҳ������ļ�!!!"<<endl;
		system("pause");
		return;
	}
	string alter;
	cout<<"������Ҫ�޸ĵĳ���ID�������:";
	cin>>alter;
	bool flag=true;/*�����ͺ���*/
	string str;
	while(inData>>ID>>petname) { /*���Һ���*/
		getline(inData,str);/*������Ϣ��str*/
		string newID;
		if((alter==ID)||(alter==petname)) {
			do {
				cout<<"����Ҫ�޸ĵĳ��"<<endl;
				cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"��������"<<setw(8)<<"�����Ը�"<<setw(8)<<"�۸�"<<endl;
				cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<str<<endl;
				cout<<"*****************�����һ����ʾ�޸���Ϣ*****************";
				cout<<"�����µĳ���ID��";
				cin>>newID;
				cout<<endl;
				if(Inquire(newID)) {
					cout<<"�����³�������";
					cin>>petname;
					fflush(stdin);
					cout<<"����:";
			        cin>>tz;
					fflush(stdin);
					cout<<"����:";
					cin>>old;
					fflush(stdin);
					cout<<"����:";
					cin>>lei;
					fflush(stdin);
					cout<<"�Ը�:";
					cin>>xg;
					fflush(stdin);
					cout<<"�۸�:";
					cin>>price;
					this->price=price;
					fflush(stdin); 
					flag=false;
				} else {
					cout<<"�������ID�Դ��ڣ����������룡��"<<endl;
				}
			} while(!Inquire(newID));
			ID=newID;
			save();
			continue;
		}
		outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<str<<endl;/*����Ϣ��ȡ��Pet1*/
	}
	outData.close();
	inData.close();
	cout<<endl<<"*****************��Ϣ�ѱ��� !!!*****************"<<endl;
	if(flag) {
		cout<<"�Ҳ�������Ҫ�޸ĵĳ���!";
		system("pause");
	} else {
		ifstream inData("pet1",ios::in);
		ofstream outData("pet",ios::out);
		if(!inData) {
			cout<<"�Բ���!�Ҳ������ļ�!!!"<<endl;
			system("pause");
			return;
		}
		while(getline(inData,str)) {
			outData<<str<<endl;
		}
		outData.close();
		inData.close();
		cout<<"�������Ϣ���޸�!";
	}
	system("pause");
}

void Pet::AllPrint() { //������г�����Ϣ
	ifstream inData("pet",ios::in);
	if(!inData) {
		cout<<"�Բ���!!!!�򲻿��ļ�!!!!!!!"<<endl;
		system("pause");
		return ;
	}
	bool flag=true;
	string all;
	while(getline(inData,all))
	{
		if(flag)
		{
			cout<<"*****************���г������£�*****************";
			cout<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(12)<<"������    "<<setw(12)<<"��������           "<<setw(12)<<"��������          "<<setw(12)<<"��������        "<<setw(12)<<"�����Ը�        "<<setw(12)<<"�۸�        "<<endl;
		}
		cout<<all<<endl;
		flag=false;
	}
	if(flag)
	{
		cout <<endl <<"��ĳ������û�г���!!!!!" <<endl<<endl;
	} 
	else
	{
		cout <<endl <<"���г����Ѿ�ȫ����ʾ����!!!!!" <<endl <<endl;
	}
	system("pause");
	system("cls");
}

void Pet::save() {
	ofstream outData("pet",ios::app);
	if(!outData) {
		cout<<"�Բ��� �򲻿����ļ���";
		system("pause");
		return;
	}
	outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<endl;
	outData.close();
}

bool Pet::Inquire(string s) { //�ж����
	ifstream inData("pet",ios::in);
	string newID;
	if(!inData) {
		cout<<endl<<"�Բ���!!!!�ļ��Ҳ���!!!!"<<endl;
		system("pause");
		return true;
	}
	bool flag=true;
	string str;
	while(inData>>newID) {
		getline(inData, str); /*�ַ�str��������������Ϣ*/
		if(newID==s) {
			flag=false;
			break;
		}
	}
	return flag;
	inData.close();
	system("pause");
	system("cls");
}

void Pet::denglupet() {
	cout<<"*****************��������ϵͳ*****************"<<endl;
	cout<<endl<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^��ӭ����������ϵͳ^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^  �������û���������    ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
}

int Pet::xianshi() {
	int menu;
	cout<<"*****************��������ϵͳ*****************"<<endl;
	cout<< endl<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^��ӭ�������ϵͳ^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.����ӳ���       ^^^        |"<<endl;
	cout<<"|        ^^^     2.���ҳ���         ^^^        |"<<endl;
	cout<<"|        ^^^     3.ɾ������         ^^^        |"<<endl;
	cout<<"|        ^^^     4.��ʾ����         ^^^        |"<<endl;
	cout<<"|        ^^^     5.�޸ĳ���         ^^^        |"<<endl;
	cout<<"|        ^^^     6.�������˵�       ^^^        |"<<endl;
	cout<<"|        ^^^     7.��������         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl<<"��ѡ����Ӧ�����˵��"<<endl;
	cin>>menu;
	while(menu<1||menu>7) {
		cout<<"��ѡ����ȷ�Ĳ˵�ѡ�"<<endl;
		cin.clear();     /*�������*/
		cin>>menu;
	}
	return menu;
	system("cls");
}
