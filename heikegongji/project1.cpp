#include <iostream>
#include <Windows.h>
#include<stdio.h>
#include<string>
using namespace std;
/*
1.��վ404����
2.��վ�۸Ĺ���
3.��վ������¼
4.DNS����
5.��������������
*/

int main(void){
	/*
	string word;
	int count=0;
	int length=0;
	cout<<"���������������ʣ�";
	while(1){
		if((bool)(cin>>word)==0){
			break;
		}
		count++;
		length+=word.length();
		
	}
	cout<<"һ���У�"<<count<<"������"<<endl;
	cout<<"�ܳ���Ϊ��"<<length<<endl;
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
	cout<<"����������������ͣ�"<<endl;
	cout<<"A:�ͻ���"<<endl;
	cout<<"B:��������"<<endl;
	cout<<"C:������"<<endl;
	cout<<"D:�˶���"<<endl;
	cin>>girlType;
	cout<<"���������������룺";
	cin>>salary;
	cout<<"������������ߣ�";
	cin>>height;
	cout<<"����������Ϊ��"<<girlType;
	*/
	/*
	int count=0;
	string food;
	cout<<"��ϲ����ʲô��";
	while(cin>>food){
		count=count+1;
		cout<<"��ϲ���ĵ�"<<count<<"����ʳ��"<<food<<endl;
	
	}
	*/

	/*
	string address;
	cout<<"����㵽����ȥ��";
	getline(cin,address);//����һ���ַ���
	if(address.empty()){//�ж��ַ����Ƿ�Ϊ��
		cout<<"��������һ���մ���"<<endl;
	}
	else{
		cout<<"���ɣ���Ҳ���㵽"<<address<<endl;
	
	}
	cout<<"��ַ�ĳ�����"<<address.size()<<endl;
	cout<<"��ַ�ĳ�����"<<address.length()<<endl;
	*/
	/*
	string name;
	string password;

	//��ӡ���ܲ˵�
	while(1){
		system("cls");
		cout<<"�������˺ţ�";
		cin>>name;
		cout<<"���������룺";
		cin>>password;
		if(name=="heshuiguai"&& password=="990226"){
			break;
		}
		else{
			cout<<"�û������������"<<endl;
			system("pause");
		}
	}
	system("cls");
	cout<<"1.��վ404����"<<endl;
	cout<<"2.��վ�۸Ĺ���"<<endl;
	cout<<"3.��վ������¼"<<endl;
	cout<<"4.DNS����"<<endl;
	cout<<"5.��������������"<<endl;
	*/
	int count=0;
	for(int i=0;i<24;i++){
		for(int j=0;j<60;j++){
			for(int k=0;k<60;k++){
				count++;
				cout<<i<<":"<<j<<":"<<k<<"��"<<count<<"������"<<endl;
				Sleep(1000);//����1��
			}
		}
	}


	system("pause");
    return 0;



}
