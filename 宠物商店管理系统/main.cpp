#include <iostream>
#include <fstream>
#include <cstring>
#include "pet.h"
#include "customer.h"
#include "deal.h"
using namespace std;

int main()
{
	int ch;
	int n=1,m=1;  //���������������
	static char deng[5]="yeke",mi[5]="1234";
	char lu[5],ma[5];
	Pet a;  /*����a*/
	Customer b;  /*����b*/
	Deal c;
	while(1)
	{
		loop:{
			cout<<"****************�����̵����ϵͳ****************"<<endl;
			cout<<endl<<endl; 
		    cout<<"------------------------------------------------"<<endl;
		    cout<<"|                                              |"<<endl;
		    cout<<"|        ^^^^^^^��ӭ�������ϵͳ^^^^^^^        |"<<endl;
		    cout<<"|        ^^^                        ^^^        |"<<endl;
		    cout<<"|        ^^^      ����곬��        ^^^        |"<<endl;
		    cout<<"|        ^^^     1.����ϵͳ         ^^^        |"<<endl;
		    cout<<"|        ^^^     2.�˿�ϵͳ         ^^^        |"<<endl;
		    cout<<"|        ^^^     3.����ϵͳ         ^^^        |"<<endl;
		    cout<<"|        ^^^     4.�˳�             ^^^        |"<<endl;
		    cout<<"|        ^^^                        ^^^        |"<<endl;
		    cout<<"|        ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        |"<<endl;
		    cout<<"------------------------------------------------"<<endl;
		    cout<<"�����빦�����Ӧ�ı�ţ�"; 
		}
		cin>>ch;
		if(ch<1||ch>4)
		{
			cout<<"����ȷ���룺";
			cin.clear();
			cin>>ch; 
		}
		system("cls");
		
		switch(ch)
		{
			case 1: 
			
			while(1)
			{
				do{
					switch(a.xianshi())
					{
						case 1:a.AddPet();break;
						case 2:a.search();break;
						case 3:a.Del();break;
						case 4:a.AllPrint();break;
						case 5:a.ChangePet();break;
						case 6:goto loop;
						case 7:
							cout<<"�ɹ��˳�ϵͳ��"<<endl;
							return 0;
					}
				}while(1);
				break;
			}
			break;
			case 2:do{
				switch(b.XianShi())
				{
					case 1:b.add();break;
					case 2:b.del();break;
					case 3:b.alter();break;
					case 4:b.show();break;
					case 5:goto loop;
					case 6:
						cout<<"�ɹ��˳�ϵͳ��"<<endl;
						return 0;
				}
			}while(1);
			break;	
			case 3:do{
				switch(c.menu())
				{
					case 1:c.Addsale();break;
					case 2:c.delesale();break;
					case 3:c.search();break;
					case 4:c.AllPrint();break;
					case 5:goto loop;
					case 6:
						cout<<"�ɹ��˳�ϵͳ��"<<endl;
						return 0;
				}
			}while(1);
			case 4:
				cout<<"�ɹ��˳�ϵͳ��"<<endl;
				return 0;
		}
	 } 
 } 
