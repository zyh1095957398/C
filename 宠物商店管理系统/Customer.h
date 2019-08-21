#include <iostream>
#include <fstream>
#include <cstdlib>//��ʾ����ͷ�ļ������������ݣ��ڱ��ļ���ֱ�ӿ���ʹ�� 
#include <iomanip>//�ǰ���I/O������ͷ�ļ� 
#include <string>
using namespace std;

class Customer
{
	string telephone;
	string name;
	public:
		void add();               /*���ӹ˿�*/            
		int XianShi();            /*��ʾ�˵�*/ 
		void del();               /*ɾ���˿�*/ 
		void alter();             /*�޸Ĺ˿���Ϣ*/ 
		void search();            /*���ҹ˿���Ϣ*/ 
		void save();              /*����˿���Ϣ*/ 
		bool Inquire(string a);   /*�жϹ˿��Ƿ���ע��*/ 
		void show();              //��ѯ�˿�Ϊn�������Ƿ���ڻ�ture 
};

//���ӹ˿�
void Customer::add()
{
	do{
		cout<<"*******ע�����û�*******"<<endl;
		cout<<"�����¹˿͵�������";
		cin>>name;
		cout<<endl;
		if(Inquire(name))//����ļ���û�з���true
		{
			cout<<"�����¹˿͵���ϵ��ʽ��";
			cin>>telephone;
			cout<<endl;
			break;
		 } 
		else
		{
			cout<<"�����ѱ�ע�ᣬ���������룡��"<<endl;} 
		 }while(1); 
		 save();
		 cout<<endl<<"*******��Ϣ�ѱ��棡��*******"<<endl;
		 system("pause");
		 system("cls");
	}
	
void Customer::del()//ɾ�� 
{
	ofstream outData("customer1",ios::out);
	ifstream inData("customer",ios::in);
	if(!inData)
	{
		cout<<"�򲻿��ļ�����"<<endl;
		system("pause");
		return;
	}
    string del,name,str;
    cout<<"��������ɾ���Ĺ˿͵����֣�";
    	cin>>del;
    	bool flag=true;
    	while(inData>>name>>telephone)
    	{
    		if(del==name)
    		{
    			cout<<"����Ҫɾ���Ĺ˿�Ϊ��"<<endl;
    			cout<<setiosflags(ios::left)<<setw(8)<<"�˿����֣�"<<setw(8)<<"�绰����"<<endl;
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
	    	cout<<"û����Ҫɾ���Ĺ˿���Ϣ��"<<endl;
			system("pause"); 
		}
		else
		{
			ofstream outData("customer",ios::out);
	        ifstream inDara("customer1",ios::in);
	        if(!inData)
	        {
		        cout<<"�򲻿��ļ�����"<<endl;
		        system("pause");
		        return;
	        }
	        while(getline(inData,str))
			{
                outData<<str<<endl; 
			}
            outData.close();
		    inData.close();
		    cout<<"�˿���ɾ������";
		}
    system("pause");
	system("cls");
}
		
void Customer::alter()//�޸� 
{
    ifstream inData("customer",ios::in);
	ofstream outData("customer1",ios::out);
	if(!inData)
	{
        cout<<"�Բ���!�Ҳ������ļ�!!!"<<endl; 
		system("pause");
		return;
	}
    string alter;
    cout<<"������Ҫ�޸ĵĿͻ���:";
	cin>>alter;
    bool flag=true;/*�����ͺ���*/ 
	string str;
    while(inData>>name>>telephone)
	{
		string newname;
		if(alter==name)
		{
		    do
			{
                cout<<"����Ҫ�޸���Ϣ�Ĺ˿�Ϊ:"<<endl;
                cout<<setiosflags(ios::left)<<setw(10)<<"�˿�����"<<setw(10)<<"��ϵ�绰"<<endl;
			    cout<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;
                cout<<"*******�����һ����ʾ�޸���Ϣ*******";
                cout<<"�������¹˿�����:";
			    cin>>newname;
			    fflush(stdin);
			    cout<<endl;
                if(Inquire(newname))
			    {
                    cout<<"����˿͵���ϵ��ʽ��";
				    cin>>telephone;
				    fflush(stdin);
				    cout<<endl;
                    flag=false;
				    break;
                    cout<<endl<<"*******��Ϣ�ѱ��� !!!*******"<<endl;
				}
			    else
			    {
                    cout<<"�����ѱ���ע�ᣡ��"<<endl;
		     	}
        }while(1);
		name=newname;
		save();
		continue;
	}
    outData<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl; /*����Ϣ��ȡ��customer1*/ 
}
if(flag)
{
    cout<<"�Ҳ�������Ҫ�޸���Ϣ�Ĺ˿�";
	system("pause");
	}
else
{
    outData.close();
	inData.close();
    ifstream inData("customer1",ios::in);
	ofstream outData("customer",ios::out);
	if(!inData){
	cout<<"�Բ����Ҳ������ļ�!"<<endl; system("pause");
	return;
}
while(getline(inData,str))
{
    outData<<str<<endl;
}
outData.close();
inData.close();
cout<<"�˹˿͵���Ϣ���޸�!";
}
system("pause");
}
void Customer::save()//����
{
    ofstream outData("customer",ios::app);
    if(!outData)
	{
        cout<<"�Բ��� �򲻿����ļ���";
		system("pause");
		return;
	}
    outData<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<telephone<<endl;
	cout<<"��Ϣ�ѱ��棡��";
	outData.close();
}

bool Customer::Inquire(string s)//�ж���� 
{
    ifstream inData("customer",ios::in);
	string newname;
    if(!inData)
	{
        cout<<endl<<"�Բ���!!!!�ļ��Ҳ���!!!!"<<endl;
		system("pause");
		return true;
    }
    bool flag=true;
	string str;
	while(inData>>newname)
	{
		getline(inData, str); /*�ַ�str��������������Ϣ*/
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
	
void Customer::search()//���ҳ�����Ϣ
{
    ifstream inData("customer",ios::in);
    if(!inData)
	{
        cout<<endl<<"�Բ���!!!!�ļ��Ҳ���!!!!"<<endl;
		system("pause");
		return;
	}
    string sign;
    cout<<endl<<"����������ҵĹ˿���: ";
	cin>>sign;
	bool flag=true;
	string str;
    while(inData>>name)
	{
        getline(inData, str); /*�ַ�str��������������Ϣ*/
		if(name==sign)
		{
            cout<<endl<<"��Ҫ���ҵĹ˿���: "<<endl<<endl;
            cout<<setiosflags(ios::left)<<setw(8)<<"�˿�����"<<setw(8)<<"��ϵ�绰"<<endl;
            cout<<setiosflags(ios::left)<<setw(8)<<name<<telephone<<endl;/*�����Ҫ���ҵ��˵���Ϣ*/
			flag=false;
			continue;
		}
	}
    if(flag)
	{
        cout<<"û�ҵ��˿ͣ�����";
    }
    system("pause");
	system("cls");
}

int Customer::XianShi()
{
    int a;
    cout<<"****************�����̵����ϵͳ****************"<<endl;
	cout<<endl<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"|                                              |"<<endl;
	cout<<"|        ^^^^^^^��ӭ����˿�ϵͳ^^^^^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^     1.����¹˿�       ^^^        |"<<endl;
	cout<<"|        ^^^     2.ɾ���˿�         ^^^        |"<<endl;
	cout<<"|        ^^^     3.�޸Ĺ˿���Ϣ     ^^^        |"<<endl;
	cout<<"|        ^^^     4.��ʾ���й˿�     ^^^        |"<<endl;
	cout<<"|        ^^^     5.�������˵�       ^^^        |"<<endl;
	cout<<"|        ^^^     6.�˳�ϵͳ         ^^^        |"<<endl;
	cout<<"|        ^^^                        ^^^        |"<<endl;
	cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"�����빦�����Ӧ�ı�ţ�"; 
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
void Customer::show()
{
    ifstream inData("customer",ios::in);
	if(!inData)
	{
        cout<<"�Բ���!!!!�򲻿��ļ�!!!!!!!"<<endl;
		system("pause");
		return;
	}
    bool flag=true;
	string all;
	while(inData>>name>>telephone)
	{
	if(flag)
	{
        cout<<"*****************���й˿�����:*****************";
		cout<<endl;
        cout<<setiosflags(ios::left)<<setw(8)<<"����"<<setw(8)<<"�绰"<<endl;
    }
    cout<<setiosflags(ios::left)<<setw(8)<<name<<setw(8)<<telephone<<endl;
    //cout<<all<<endl;
	flag=false;
    }
    if(flag)
    {
        cout <<endl <<"��Ĺ˿�ϵͳ��û�й˿�!!!!!" <<endl <<endl;
    } 
	else
	{
        cout <<endl <<"���й˿���Ϣ�Ѿ�ȫ����ʾ����!!!!!" <<endl <<endl;
	}
	inData.close();
	system("pause");
	system("cls");
}

