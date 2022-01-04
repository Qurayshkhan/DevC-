#include <iostream>
using namespace std;
int main()
{
	cout<<"My first program\n";
	cout<<"My Name is Hassan"<<endl;
	
	int a=5;
	int b=6;
	cout<<"The value of a+b is ="<<(a+b)<<endl;
	cout<<"The value of a-b is ="<<(a-b)<<endl;
	cout<<"The value of a*b is ="<<(a*b)<<endl;
	cout<<"The value of a/b is ="<<(a/b)<<endl;
	cout<<"The value of a%b is ="<<(a%b)<<endl;
	cout<<"The value of a++ is ="<<(a++)<<endl;
	cout<<"The value of --a is ="<<(--a)<<endl;
	cout<<"The value of ++a is ="<<(++a)<<endl;
	cout<<"The value of --a is ="<<(--a)<<endl;
	
	cout<<"following are the comparision operators"<<endl;
	cout<<"The value of (a==b)"<<(a==b)<<endl;
	cout<<"The value of (a!=b)"<<(a!=b)<<endl;
	cout<<"The value of (a>b)"<<(a>b)<<endl;
	cout<<"The value of (a<b)"<<(a<b)<<endl;
	cout<<"The value of (a>=b)"<<(a>=b)<<endl;
	cout<<"The value of (a<=b)"<<(a<=b)<<endl;
	
	cout<<"Following are the logical operators"<<endl;
	
	cout<<"The value of (a==b)&&(a>b)"<<((a==b)&&(a<b))<<endl;
	cout<<"The value of (a==b)||(a<b)"<<((a==b)&&(a>b))<<endl;
	
	int c;
	int d;
	int sum;
	
	
	
	cout<<"Enter 1st number"<<endl;
	cin>>c;	
	
	cout<<"Enter 2nd number"<<endl;
	cin>>d;
	
	sum=c+d;
	cout<<"the value of sum is "<<sum<<endl;
	
	bool is_true=true;
	cout<<sum<<is_true<<endl;
	
	char x='d';
	cout<<int(x)<<endl;
	
	
	
	return 0;
	
	
}
