#include<iostream> 
#include<string> 
#include<iomanip> 
#include<fstream>
using namespace std; //��׼�����ռ�

class Deal
{
    public:
        //���캯��,���������г�ʼ��,�������������캯��(���������ʹ�������)
		SaleItem(){}
		void Addsale(); //���� 
		void delesale(); //ɾ�� 
		void search(); //��ѯ 
		void AllPrint(); //��� 
		void save(); //���� 
		int menu(); //�˵� 
	private:
	    string name; 
	    string petname; 
	    double price; 
	    int count;
	    string sex;
	    string date;
};

void Deal::Addsale() 
{
    cout<<"������˿�����:";
	cin>>name;
	cout<<"�����빺���������:";
	cin>>petname;
	cout<<"�����빺������Ա�:";
	cin>>sex;
	cout<<"�����빺������:";
	cin>>count;
	cout<<"��������ﵥ��:";
	cin>>price;
	cout<<"�����뽻������:";
	cin>>date;
	cout<<"\t\t�˿�����\t"<<name<<endl<<"\t\t��������\t"<<petname<<"\t\t�����Ա�\t"<<sex<<endl<<"\t\t��������\t"<<count<<endl<<"\t\t���ﵥ��\t"<<price<<endl<<"\t\t��������\t"<<date<<endl; 
	save();
	cout<<endl<<"**********************��Ϣ�ѱ��� !!!******************"<<endl;
	system("pause");
	system("cls");
}
 
void Deal::delesale()
{ 
    ofstream outData("deal1",ios::out);
	ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<"�򲻿��ļ�!!"<<endl; system("pause"); return; 
    }
    string del;
	cout<<"��������ɾ���Ŀͻ�����"<<endl;
	cin>>del;
	bool flag=true;
	string str;
    while(inData>>name>>petname>>sex>>count>>price>>date)
	{
        getline(inData,str);
		if(del==name)
		{
            cout<<"����Ҫɾ�����˵���"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"�ͻ�����"<<setw(8)<<"��������"<<setw(8)<<"�����Ա�"<<setw(8)<<"��������"<<setw(8)<<"���ﵥ��"<<setw(8)<<"��������"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;/*�����Ҫɾ�����˵���Ϣ*/ 
			flag=false; 
			continue; 
		}
		outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
	}
	outData.close();
	inData.close();
	if(flag)
	{
        cout<<"û����Ҫɾ�����˵�����Ϣ!"<<endl;
		system("pause");
	} 
	else
	{
        ofstream outData("deal",ios::out);
		ifstream inData("deal1",ios::in);
		if(!inData)
		{
	        cout<<"�Բ��𣬴򲻿��ļ���"<<endl;
			system("pause");
			return; 
		}
		while(getline(inData,str))
		{
            outData<<str<<endl;
		}
		outData.close();
		inData.close();
	}
	system("pause");
	system("cls");
}

void Deal::save()
{
    ofstream outData("deal",ios::app);
	if(!outData)
	{
        cout<<"�Բ���򲻿��ļ�!"<<endl;
		system("pause");
		return;
	}
	outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
	cout<<"��Ϣ�ѱ��棡��";
	outData.close();
}

void Deal::search()//���ҳ�����Ϣ
{
    ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<endl<<"�Բ���!!!!�ļ��Ҳ���!!!!"<<endl;
		system("pause");
		return;
	}
	string sign;
	cout<<endl<<"����������ҵĿͻ�����: ";
	cin>>sign;
	bool flag=true;
	string str;
	while(inData>>name)
	{
        getline(inData, str); /*�ַ�str�������ܳ� �������Ż�ӰƬ������ͬ*/
		if(name==sign)
		{
            cout<<endl<<"��Ҫ���ҿͻ���Ϣ��: "<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"�ͻ���"<<setw(8)<<"��������"<<setw(8)<<"�����Ա�"<<setw(8)<<"�۸�"<<setw(8)<<"����"<<setw(8)<<"����"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<name<<str<<endl;/*�����Ҫ���ҵ��˵���Ϣ*/ 
			flag=false;
			continue;
		}
	}
	if(flag)
	{
        cout<<"û�ҵ���Ĺ˿ͣ�����";
	}
	system("pause");
	system("cls");
}

void Deal::AllPrint()//���������Ϣ 
{
    ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<"�Բ���!!!!�򲻿��ļ�!!!!!!!"<<endl;
		system("pause");
		return ;
	}
    bool flag=true;
	string all;
	while(inData>>name>>petname>>sex>>count>>price>>date)
	{
        if(flag)
		{
            cout<<"****************�����˵���Ϣ����:****************";
			cout<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"�ͻ�"<<setw(8)<<"��������"<<setw(8)<<"�����Ա�"<<setw(8)<<"��������"<<setw(8)<<"����۸�"<<setw(8)<<"��������"<<endl;
		}
		cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
		flag=false;
	}
	if(flag)
	{
	    cout <<endl <<"�����Ϣ����û����Ϣ!!!!!" <<endl <<endl;
	}
	else
	{
        cout <<endl <<"������Ϣ�Ѿ�ȫ����ʾ����!!!!!" <<endl <<endl;
	}
	system("pause");
	system("cls");
}

int Deal::menu()
{
    int a;
	cout<<"****************�����̵����ϵͳ****************"<<endl; 
	cout<<endl<<endl; 
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^��ӭ���뽻��ϵͳ^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.�����Ϣ         ^^^        |"<<endl;
	cout<<"|        ^^^     2.ɾ����Ϣ         ^^^        |"<<endl;
	cout<<"|        ^^^     3.��ѯ��Ϣ         ^^^        |"<<endl;
	cout<<"|        ^^^     4.��ʾ��Ϣ         ^^^        |"<<endl;
	cout<<"|        ^^^     5.�������˵�       ^^^        |"<<endl;
	cout<<"|        ^^^     6.�˳�ϵͳ         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"��ѡ����ҪӦ�õı�ţ�";
	cin>>a;
	while (a<1||a>6)
	{
        cout<<"����ȷ����ѡ����!" <<endl;
		cin.clear();
		cin>>a;
	}
	return a;
	system("pause");
	system("cls");
 }
