#include <iostream>
#include <Windows.h>
#include<stdio.h>
#include<string>
using namespace std;
/*
1.网站404攻击
2.网站篡改攻击
3.网站攻击记录
4.DNS攻击
5.服务器重启攻击
*/

int main(void){
	/*
	string word;
	int count=0;
	int length=0;
	cout<<"请输入任意多个单词：";
	while(1){
		if((bool)(cin>>word)==0){
			break;
		}
		count++;
		length+=word.length();
		
	}
	cout<<"一共有："<<count<<"个单词"<<endl;
	cout<<"总长度为："<<length<<endl;
	*/
	/*
	double value=1.234567;
	cout<<value<<endl;
	cout.precision(4);
	cout<<value<<endl;
	cout.flags(cout.fixed);
	cout<<value<<endl;
	cout.unsetf(cout.fixed);
	cout<<value<<endl;
	*/
	/*
	char girlType;
	int salary;
	float height;
	cout<<"请输入你的理想类型："<<endl;
	cout<<"A:贤惠型"<<endl;
	cout<<"B:泼辣型型"<<endl;
	cout<<"C:文艺型"<<endl;
	cout<<"D:运动型"<<endl;
	cin>>girlType;
	cout<<"请输入您的月收入：";
	cin>>salary;
	cout<<"请输入您的身高：";
	cin>>height;
	cout<<"您的理想型为："<<girlType;
	*/
	/*
	int count=0;
	string food;
	cout<<"你喜欢吃什么？";
	while(cin>>food){
		count=count+1;
		cout<<"你喜欢的第"<<count<<"种美食是"<<food<<endl;
	
	}
	*/

	/*
	string address;
	cout<<"你打算到哪里去？";
	getline(cin,address);//输入一行字符串
	if(address.empty()){//判断字符串是否为空
		cout<<"你输入了一个空串！"<<endl;
	}
	else{
		cout<<"真巧，我也打算到"<<address<<endl;
	
	}
	cout<<"地址的长度是"<<address.size()<<endl;
	cout<<"地址的长度是"<<address.length()<<endl;
	*/
	/*
	string name;
	string password;

	//打印功能菜单
	while(1){
		system("cls");
		cout<<"请输入账号：";
		cin>>name;
		cout<<"请输入密码：";
		cin>>password;
		if(name=="heshuiguai"&& password=="990226"){
			break;
		}
		else{
			cout<<"用户名或密码错误！"<<endl;
			system("pause");
		}
	}
	system("cls");
	cout<<"1.网站404攻击"<<endl;
	cout<<"2.网站篡改攻击"<<endl;
	cout<<"3.网站攻击记录"<<endl;
	cout<<"4.DNS攻击"<<endl;
	cout<<"5.服务器重启攻击"<<endl;
	*/
	int count=0;
	for(int i=0;i<24;i++){
		for(int j=0;j<60;j++){
			for(int k=0;k<60;k++){
				count++;
				cout<<i<<":"<<j<<":"<<k<<"第"<<count<<"次想你"<<endl;
				Sleep(1000);//休眠1秒
			}
		}
	}


	system("pause");
    return 0;



}
