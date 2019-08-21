#include<iostream> 
#include<string> 
#include<iomanip> 
#include<fstream>
using namespace std; //标准命名空间

class Deal
{
    public:
        //构造函数,对类对象进行初始化,重载了两个构造函数(不带参数和带参数的)
		SaleItem(){}
		void Addsale(); //增加 
		void delesale(); //删除 
		void search(); //查询 
		void AllPrint(); //输出 
		void save(); //保存 
		int menu(); //菜单 
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
    cout<<"请输入顾客姓名:";
	cin>>name;
	cout<<"请输入购买宠物种类:";
	cin>>petname;
	cout<<"请输入购买宠物性别:";
	cin>>sex;
	cout<<"请输入购买数量:";
	cin>>count;
	cout<<"请输入宠物单价:";
	cin>>price;
	cout<<"请输入交易日期:";
	cin>>date;
	cout<<"\t\t顾客姓名\t"<<name<<endl<<"\t\t宠物种类\t"<<petname<<"\t\t宠物性别\t"<<sex<<endl<<"\t\t购买数量\t"<<count<<endl<<"\t\t宠物单价\t"<<price<<endl<<"\t\t交易日期\t"<<date<<endl; 
	save();
	cout<<endl<<"**********************信息已保存 !!!******************"<<endl;
	system("pause");
	system("cls");
}
 
void Deal::delesale()
{ 
    ofstream outData("deal1",ios::out);
	ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<"打不开文件!!"<<endl; system("pause"); return; 
    }
    string del;
	cout<<"输入你想删除的客户名："<<endl;
	cin>>del;
	bool flag=true;
	string str;
    while(inData>>name>>petname>>sex>>count>>price>>date)
	{
        getline(inData,str);
		if(del==name)
		{
            cout<<"您所要删除的账单："<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"客户姓名"<<setw(8)<<"宠物种类"<<setw(8)<<"宠物性别"<<setw(8)<<"购买数量"<<setw(8)<<"宠物单价"<<setw(8)<<"交易日期"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;/*输出所要删除的人的信息*/ 
			flag=false; 
			continue; 
		}
		outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
	}
	outData.close();
	inData.close();
	if(flag)
	{
        cout<<"没有您要删除的账单的信息!"<<endl;
		system("pause");
	} 
	else
	{
        ofstream outData("deal",ios::out);
		ifstream inData("deal1",ios::in);
		if(!inData)
		{
	        cout<<"对不起，打不开文件！"<<endl;
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
        cout<<"对不起打不开文件!"<<endl;
		system("pause");
		return;
	}
	outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
	cout<<"信息已保存！！";
	outData.close();
}

void Deal::search()//查找宠物信息
{
    ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<endl<<"对不起!!!!文件找不到!!!!"<<endl;
		system("pause");
		return;
	}
	string sign;
	cout<<endl<<"输入你想查找的客户姓名: ";
	cin>>sign;
	bool flag=true;
	string str;
	while(inData>>name)
	{
        getline(inData, str); /*字符str用来接受除 与输入编号或影片名称相同*/
		if(name==sign)
		{
            cout<<endl<<"你要查找客户信息是: "<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"客户名"<<setw(8)<<"宠物名字"<<setw(8)<<"宠物性别"<<setw(8)<<"价格"<<setw(8)<<"数量"<<setw(8)<<"日期"<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<name<<str<<endl;/*输出所要查找的人的信息*/ 
			flag=false;
			continue;
		}
	}
	if(flag)
	{
        cout<<"没找到你的顾客！！！";
	}
	system("pause");
	system("cls");
}

void Deal::AllPrint()//输出所有信息 
{
    ifstream inData("deal",ios::in);
	if(!inData)
	{
        cout<<"对不起!!!!打不开文件!!!!!!!"<<endl;
		system("pause");
		return ;
	}
    bool flag=true;
	string all;
	while(inData>>name>>petname>>sex>>count>>price>>date)
	{
        if(flag)
		{
            cout<<"****************所有账单信息如下:****************";
			cout<<endl<<endl;
			cout<<setiosflags(ios::left)<<setw(8)<<"客户"<<setw(8)<<"宠物名称"<<setw(8)<<"宠物性别"<<setw(8)<<"宠物数量"<<setw(8)<<"宠物价格"<<setw(8)<<"交易日期"<<endl;
		}
		cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<petname<<setw(8)<<sex<<setw(8)<<count<<setw(8)<<price<<setw(8)<<date<<endl;
		flag=false;
	}
	if(flag)
	{
	    cout <<endl <<"你的信息库里没有信息!!!!!" <<endl <<endl;
	}
	else
	{
        cout <<endl <<"所有信息已经全部显示出来!!!!!" <<endl <<endl;
	}
	system("pause");
	system("cls");
}

int Deal::menu()
{
    int a;
	cout<<"****************宠物商店管理系统****************"<<endl; 
	cout<<endl<<endl; 
	cout<<"------------------------------------------------"<<endl;
	cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^欢迎进入交易系统^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.添加信息         ^^^        |"<<endl;
	cout<<"|        ^^^     2.删除信息         ^^^        |"<<endl;
	cout<<"|        ^^^     3.查询信息         ^^^        |"<<endl;
	cout<<"|        ^^^     4.显示信息         ^^^        |"<<endl;
	cout<<"|        ^^^     5.返回主菜单       ^^^        |"<<endl;
	cout<<"|        ^^^     6.退出系统         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"请选择所要应用的编号：";
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
