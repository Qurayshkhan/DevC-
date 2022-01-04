#include<iostream>
using namespace std;
int main()
{
	/*Starting*/
	cout<<"MY name is Hassan\n";
	cout<<"This is my first program"<<endl;
	/*We are using data  types int and variables*/
	int a=5;
	int b=6;
	int sum;
	sum=a+b;
	cout<<"The value of sum is="<<sum<<endl;
	/*we are using float data type*/
	float c=7.89;
	float d=4.98;
	float sub;
	sub=c-d;
	cout<<"the value of sub is="<<sub<<endl;
	/*we use char*/
	char x='a';
	cout<<int(x)<<endl;
	/*we use boolean*/
	bool is_false=false;
	cout<<"sub is " <<is_false<<endl;
	/*Now we learn get output and input*/
	
	int Number1;
	int Number2;
	
	cout<<"Enter the 1st number";/* << is called isertion*/;
	cin>>Number1; /* >> is called extration */
	
	cout<<"Enter the 2nd number"; /*<< is called insertion*/
	cin>>Number2; /* >> is called extration */
	
	sum=Number1+Number2;
	
	cout<<"The value of sum is="<<sum<<endl;
	
	
}
