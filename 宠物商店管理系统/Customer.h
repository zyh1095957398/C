#include <iostream>
#include <fstream>
#include <cstdlib>//表示引入头文件中声明的内容，在本文件中直接可以使用 
#include <iomanip>//是包含I/O流控制头文件 
#include <string>
using namespace std;

class Customer
{
	string telephone;
	string name;
	public:
		void add();               /*增加顾客*/            
		int XianShi();            /*显示菜单*/ 
		void del();               /*删除顾客*/ 
		void alter();             /*修改顾客信息*/ 
		void search();            /*查找顾客信息*/ 
		void save();              /*保存顾客信息*/ 
		bool Inquire(string a);   /*判断顾客是否已注册*/ 
		void show();              //查询顾客为n的姓名是否存在回ture 
};

//增加顾客
void Customer::add()
{
	do{
		cout<<"*******注册新用户*******"<<endl;
		cout<<"输入新顾客的姓名：";
		cin>>name;
		cout<<endl;
		if(Inquire(name))//如果文件里没有返回true
		{
			cout<<"输入新顾客的联系方式：";
			cin>>telephone;
			cout<<endl;
			break;
		 } 
		else
		{
			cout<<"姓名已被注册，请重新输入！！"<<endl;} 
		 }while(1); 
		 save();
		 cout<<endl<<"*******信息已保存！！*******"<<endl;
		 system("pause");
		 system("cls");
	}
	
void Customer::del()//删除 
{
	ofstream outData("customer1",ios::out);
	ifstream inData("customer",ios::in);
	if(!inData)
	{
		cout<<"打不开文件！！"<<endl;
		system("pause");
		return;
	}
    string del,name,str;
    cout<<"输入你想删除的顾客的名字：";
    	cin>>del;
    	bool flag=true;
    	while(inData>>name>>telephone)
    	{
    		if(del==name)
    		{
    			cout<<"您所要删除的顾客为："<<endl;
    			cout<<setiosflags(ios::left)<<setw(8)<<"顾客名字："<<setw(8)<<"电话号码"<<endl;
				cout<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;
				flag=false;
				continue;
			}
			
		outData<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;
		}
		
	    outData.close();
	    inData.close();
	    if(flag)
	    {
	    	cout<<"没有您要删除的顾客信息！"<<endl;
			system("pause"); 
		}
		else
		{
			ofstream outData("customer",ios::out);
	        ifstream inDara("customer1",ios::in);
	        if(!inData)
	        {
		        cout<<"打不开文件！！"<<endl;
		        system("pause");
		        return;
	        }
	        while(getline(inData,str))
			{
                outData<<str<<endl; 
			}
            outData.close();
		    inData.close();
		    cout<<"顾客已删除！！";
		}
    system("pause");
	system("cls");
}
		
void Customer::alter()//修改 
{
    ifstream inData("customer",ios::in);
	ofstream outData("customer1",ios::out);
	if(!inData)
	{
        cout<<"对不起!找不到此文件!!!"<<endl; 
		system("pause");
		return;
	}
    string alter;
    cout<<"请输入要修改的客户名:";
	cin>>alter;
    bool flag=true;/*布尔型函数*/ 
	string str;
    while(inData>>name>>telephone)
	{
		string newname;
		if(alter==name)
		{
		    do
			{
                cout<<"您所要修改信息的顾客为:"<<endl;
                cout<<setiosflags(ios::left)<<setw(10)<<"顾客姓名"<<setw(10)<<"联系电话"<<endl;
			    cout<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;
                cout<<"*******请根据一下提示修改信息*******";
                cout<<"请输入新顾客姓名:";
			    cin>>newname;
			    fflush(stdin);
			    cout<<endl;
                if(Inquire(newname))
			    {
                    cout<<"输入顾客的联系方式：";
				    cin>>telephone;
				    fflush(stdin);
				    cout<<endl;
                    flag=false;
				    break;
                    cout<<endl<<"*******信息已保存 !!!*******"<<endl;
				}
			    else
			    {
                    cout<<"姓名已被人注册！！"<<endl;
		     	}
        }while(1);
		name=newname;
		save();
		continue;
	}
    outData<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl; /*把信息读取到customer1*/ 
}
if(flag)
{
    cout<<"找不到您所要修改信息的顾客";
	system("pause");
	}
else
{
    outData.close();
	inData.close();
    ifstream inData("customer1",ios::in);
	ofstream outData("customer",ios::out);
	if(!inData){
	cout<<"对不起！找不到此文件!"<<endl; system("pause");
	return;
}
while(getline(inData,str))
{
    outData<<str<<endl;
}
outData.close();
inData.close();
cout<<"此顾客的信息已修改!";
}
system("pause");
}
void Customer::save()//保存
{
    ofstream outData("customer",ios::app);
    if(!outData)
	{
        cout<<"对不起！ 打不开此文件。";
		system("pause");
		return;
	}
    outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<telephone<<endl;
	cout<<"信息已保存！！";
	outData.close();
}

bool Customer::Inquire(string s)//判断真假 
{
    ifstream inData("customer",ios::in);
	string newname;
    if(!inData)
	{
        cout<<endl<<"对不起!!!!文件找不到!!!!"<<endl;
		system("pause");
		return true;
    }
    bool flag=true;
	string str;
	while(inData>>newname)
	{
		getline(inData, str); /*字符str用来接受其他信息*/
		if(newname==s)
 	    {
            flag=false;
		    break;
	    }
	}
    return flag;
	inData.close();
	system("pause");
	system("cls");
}
	
void Customer::search()//查找宠物信息
{
    ifstream inData("customer",ios::in);
    if(!inData)
	{
        cout<<endl<<"对不起!!!!文件找不到!!!!"<<endl;
		system("pause");
		return;
	}
    string sign;
    cout<<endl<<"输入你想查找的顾客名: ";
	cin>>sign;
	bool flag=true;
	string str;
    while(inData>>name)
	{
        getline(inData, str); /*字符str用来接受其他信息*/
		if(name==sign)
		{
            cout<<endl<<"你要查找的顾客名: "<<endl<<endl;
            cout<<setiosflags(ios::left)<<setw(8)<<"顾客姓名"<<setw(8)<<"联系电话"<<endl;
            cout<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;/*输出所要查找的人的信息*/
			flag=false;
			continue;
		}
	}
    if(flag)
	{
        cout<<"没找到顾客！！！";
    }
    system("pause");
	system("cls");
}

int Customer::XianShi()
{
    int a;
    cout<<"****************宠物商店管理系统****************"<<endl;
	cout<<endl<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^欢迎进入顾客系统^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.添加新顾客       ^^^        |"<<endl;
	cout<<"|        ^^^     2.删除顾客         ^^^        |"<<endl;
	cout<<"|        ^^^     3.修改顾客信息     ^^^        |"<<endl;
	cout<<"|        ^^^     4.显示所有顾客     ^^^        |"<<endl;
	cout<<"|        ^^^     5.返回主菜单       ^^^        |"<<endl;
	cout<<"|        ^^^     6.退出系统         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"请输入功能相对应的编号："; 
    cin>>a;
    while (a<1||a>6)
	{
        cout<<"请正确输入选择编号!" <<endl;
		cin.clear();
		cin>>a;
	}
    return a;
    system("pause");
	system("cls");
}
void Customer::show()
{
    ifstream inData("customer",ios::in);
	if(!inData)
	{
        cout<<"对不起!!!!打不开文件!!!!!!!"<<endl;
		system("pause");
		return;
	}
    bool flag=true;
	string all;
	while(inData>>name>>telephone)
	{
	if(flag)
	{
        cout<<"*****************所有顾客如下:*****************";
		cout<<endl;
        cout<<setiosflags(ios::left)<<setw(8)<<"姓名"<<setw(8)<<"电话"<<endl;
    }
    cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<telephone<<endl;
    //cout<<all<<endl;
	flag=false;
    }
    if(flag)
    {
        cout <<endl <<"你的顾客系统中没有顾客!!!!!" <<endl <<endl;
    } 
	else
	{
        cout <<endl <<"所有顾客信息已经全部显示出来!!!!!" <<endl <<endl;
	}
	inData.close();
	system("pause");
	system("cls");
}

