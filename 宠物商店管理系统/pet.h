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
		void AddPet();//添加宠物
		void Del();//删除宠物信息
		void search();//查找宠物信息
		void ChangePet();//修改宠物单价
		void AllPrint();//输出所有宠物信息
		void save();//保存宠物信息
		void denglupet();//显示登陆页面
		int xianshi( ); //显示功能菜单
		bool Inquire(string a);
	private:
		string ID;
		string petname;//宠物名
		string tz;//体重 
		string old;//年龄 
		string lei;//种类
		string price;//价格
		string xg;//性格 
};
//成员函数的实现
void Pet::AddPet() { //增加宠物输入文本中
	do {
		cout<<" *****************增加新的宠物***************** "<<endl;
		cout<<"输入宠物的ID：";
		cin>>ID;
		cout<<endl;
		if(Inquire(ID)) {
			cout<<"输入宠物名：";
			cin>>petname;
			fflush(stdin);
			cout<<"体重:";
			cin>>tz;
			fflush(stdin);
			cout<<"年龄:";
			cin>>old;
			fflush(stdin);
			cout<<"种类:";
			cin>>lei;
			fflush(stdin);
			cout<<"性格:";
			cin>>xg;
			fflush(stdin);
			cout<<"价格:";
			cin>>price;
			fflush(stdin);
			cout<<"      ID   ："<<ID<<endl<<"    宠物名 ："<<petname<<"   宠物体重："<<tz<<endl<<"   宠物年龄："<<old<<endl<<"   宠物种类："<<lei<<endl<<"   宠物性格："<<xg<<endl<<endl<<"    宠物价格："<<price<<endl;
			fflush(stdin);
		} else {
			cout<<"输入的ID已存在，请重新输入！！"<<endl;
		}
	} while(!(Inquire(ID)));
	save();
	cout<<endl<<"*****************信息已保存!!!*****************"<<endl;
	system("pause");
	system("cls");
}

void Pet::Del() { //删除宠物信息
	ifstream inData("pet",ios::in);
	ofstream outData("pet1",ios::out);
	if(!inData) {
		cout<<"对不起！ 打不开此文件。";
		system("pause");
		return;
	}
	string str,del;
	cout<<"请输入要删除的宠物ID或名字:"<<endl;
	cin>>str;
	bool flag=true;
	while(inData>>ID>>petname) {
		getline(inData,del);
		if(ID==str||petname==str) {
			cout<<setiosflags(ios::left)<<setw(8)<<"您所要删除的宠物："<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"宠物名"<<setw(8)<<"宠物体重"<<setw(8)<<"宠物年龄"<<setw(8)<<"宠物种类"<<setw(8)<<"宠物性格"<<setw(8)<<"价格"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<del<<endl;
			flag=false;
			continue;
		}
		outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<del<<endl;
	}
	inData.close();
	outData.close();
	if(flag) {
		cout<<"对不起！没有找到你删除的宠物！\n";
		system("pause");
	} else {
		ofstream outData("pet",ios::out);
		ifstream inData("pet1",ios::in);
		if(!inData) {
			cout<<"对不起，打不开文件！"<<endl;
			system("pause");
			return;
		}
		while(getline(inData,str)) {
			outData<<str<<endl;
		}
		outData.close();
		inData.close();
		cout<<"宠物已删除！！";
	}
	system("pause");
	system("cls");
}

void Pet::search() { //查找宠物信息
	ifstream inData("pet",ios::in);
	if(!inData) {
		cout<<endl<<"对不起!!!!文件找不到!!!!"<<endl;
		system("pause");
		return;
	}
	string sign;
	cout<<endl<<"输入你想查找的宠物的编号或名称: ";
	cin>>sign;
	bool flag=true;
	string str;
	while(inData>>ID>>petname) {
		getline(inData, str); /*字符str用来接受除 与输入编号或影片名称相同之外的其他信息*/
		if((ID==sign)||(petname==sign)) {
			cout<<endl<<"你要查找的宠物信息是: "<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"宠物名"<<setw(8)<<"宠物体重"<<setw(8)<<"宠物年龄"<<setw(8)<<"宠物种类"<<setw(8)<<"宠物性格"<<setw(8)<<"价格"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<str<<endl;/*输出所要查找的人的信息*/
			flag=false;
			continue;
		}
	}
	if(flag) {
		cout<<"没有找到你的宠物！！！";
	}
	system("pause");
	system("cls");
}

void Pet::ChangePet() { //修改宠物单价
	ofstream outData("pet1",ios::out);/*创建一个名为pet1的文件并打开*/
	ifstream inData("pet",ios::in);/*打开名为pet的文件并读取里面的内容*/
	if(!inData) {
		cout<<"对不起!找不到此文件!!!"<<endl;
		system("pause");
		return;
	}
	string alter;
	cout<<"请输入要修改的宠物ID或宠物名:";
	cin>>alter;
	bool flag=true;/*布尔型函数*/
	string str;
	while(inData>>ID>>petname) { /*查找函数*/
		getline(inData,str);/*赋予信息给str*/
		string newID;
		if((alter==ID)||(alter==petname)) {
			do {
				cout<<"您所要修改的宠物："<<endl;
				cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(8)<<"宠物名"<<setw(8)<<"宠物体重"<<setw(8)<<"宠物年龄"<<setw(8)<<"宠物种类"<<setw(8)<<"宠物性格"<<setw(8)<<"价格"<<endl;
				cout<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<str<<endl;
				cout<<"*****************请根据一下提示修改信息*****************";
				cout<<"输入新的宠物ID：";
				cin>>newID;
				cout<<endl;
				if(Inquire(newID)) {
					cout<<"输入新宠物名：";
					cin>>petname;
					fflush(stdin);
					cout<<"体重:";
			        cin>>tz;
					fflush(stdin);
					cout<<"年龄:";
					cin>>old;
					fflush(stdin);
					cout<<"种类:";
					cin>>lei;
					fflush(stdin);
					cout<<"性格:";
					cin>>xg;
					fflush(stdin);
					cout<<"价格:";
					cin>>price;
					this->price=price;
					fflush(stdin); 
					flag=false;
				} else {
					cout<<"你输入的ID以存在，请重新输入！！"<<endl;
				}
			} while(!Inquire(newID));
			ID=newID;
			save();
			continue;
		}
		outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<str<<endl;/*把信息读取到Pet1*/
	}
	outData.close();
	inData.close();
	cout<<endl<<"*****************信息已保存 !!!*****************"<<endl;
	if(flag) {
		cout<<"找不到您所要修改的宠物!";
		system("pause");
	} else {
		ifstream inData("pet1",ios::in);
		ofstream outData("pet",ios::out);
		if(!inData) {
			cout<<"对不起!找不到此文件!!!"<<endl;
			system("pause");
			return;
		}
		while(getline(inData,str)) {
			outData<<str<<endl;
		}
		outData.close();
		inData.close();
		cout<<"宠物的信息已修改!";
	}
	system("pause");
}

void Pet::AllPrint() { //输出所有宠物信息
	ifstream inData("pet",ios::in);
	if(!inData) {
		cout<<"对不起!!!!打不开文件!!!!!!!"<<endl;
		system("pause");
		return ;
	}
	bool flag=true;
	string all;
	while(getline(inData,all))
	{
		if(flag)
		{
			cout<<"*****************所有宠物如下：*****************";
			cout<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"ID"<<setw(12)<<"宠物名    "<<setw(12)<<"宠物体重           "<<setw(12)<<"宠物年龄          "<<setw(12)<<"宠物种类        "<<setw(12)<<"宠物性格        "<<setw(12)<<"价格        "<<endl;
		}
		cout<<all<<endl;
		flag=false;
	}
	if(flag)
	{
		cout <<endl <<"你的宠物库中没有宠物!!!!!" <<endl<<endl;
	} 
	else
	{
		cout <<endl <<"所有宠物已经全部显示出来!!!!!" <<endl <<endl;
	}
	system("pause");
	system("cls");
}

void Pet::save() {
	ofstream outData("pet",ios::app);
	if(!outData) {
		cout<<"对不起！ 打不开此文件。";
		system("pause");
		return;
	}
	outData<<setiosflags(ios::left)<<setw(8)<<ID<<petname<<tz<<old<<lei<<xg<<price<<endl;
	outData.close();
}

bool Pet::Inquire(string s) { //判断真假
	ifstream inData("pet",ios::in);
	string newID;
	if(!inData) {
		cout<<endl<<"对不起!!!!文件找不到!!!!"<<endl;
		system("pause");
		return true;
	}
	bool flag=true;
	string str;
	while(inData>>newID) {
		getline(inData, str); /*字符str用来接受其他信息*/
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
	cout<<"*****************宠物店管理系统*****************"<<endl;
	cout<<endl<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^欢迎进入宠物管理系统^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^  请输入用户名和密码    ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
}

int Pet::xianshi() {
	int menu;
	cout<<"*****************宠物店管理系统*****************"<<endl;
	cout<< endl<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^欢迎进入宠物系统^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.新添加宠物       ^^^        |"<<endl;
	cout<<"|        ^^^     2.查找宠物         ^^^        |"<<endl;
	cout<<"|        ^^^     3.删除宠物         ^^^        |"<<endl;
	cout<<"|        ^^^     4.显示宠物         ^^^        |"<<endl;
	cout<<"|        ^^^     5.修改宠物         ^^^        |"<<endl;
	cout<<"|        ^^^     6.返回主菜单       ^^^        |"<<endl;
	cout<<"|        ^^^     7.结束运行         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl<<"请选择相应操作菜单项："<<endl;
	cin>>menu;
	while(menu<1||menu>7) {
		cout<<"请选择正确的菜单选项："<<endl;
		cin.clear();     /*清除输入*/
		cin>>menu;
	}
	return menu;
	system("cls");
}
