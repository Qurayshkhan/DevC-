#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"This is my world.......\n";
	cout<<"This is my program......"<<endl;
	
 int a;
 int b;
 int sum;
 
 cout<<"Enter the value of a..."<<endl;
 
 cin>>a;
 
 cout<<"Enter the value of b...."<<endl;
 
 cin>>b;
 //operator precendance
 sum=a+(b*6);
 
 cout<<"the value of sum is "<<sum<<endl;
 

float c=23.7;
float d=56.6;
float sub;

sub=c-d;

cout<<"the value of sub is..."<<sub<<endl;

/*Arithmatic operators*/

cout<<"(a+b)"<<endl;
cout<<"(a-b)"<<endl;
cout<<"(a/b)"<<endl;
cout<<"(a%b)"<<endl;
cout<<"(a*b)"<<endl;
cout<<"(a>b)"<<endl;
cout<<"(a<b)"<<endl;
cout<<"(a++)"<<endl;
cout<<"(a--)"<<endl;
cout<<"(++a)"<<endl;
cout<<"(--a)"<<endl;

cout<<"Following are the logical operators"<<endl;

/*comparision operators*/

cout<<"(a==b)"<<endl;	
cout<<"(a!=b)"<<endl;	
cout<<"(a<=b)"<<endl;	
cout<<"(a>=b)"<<endl;
	
cout<<"Following are the logical operators"<<endl;

cout<<"The expression of (a==b)&&(a>b)is..."<<((a==b)&&(a>b))<<endl;	
cout<<"The expression of (a==b)||(a>b)is..."<<((a==b)||(a>b))<<endl;	
cout<<"The expression of (!(a==b)||(a>b)is..."<<(!(a==b)||(a>b))<<endl;	

bool is_true=true;
cout<<sum<<endl<<is_true<<endl;

cout<<"Following are the refrence variable"<<endl;

/*refrence variable*/

int x=10;
int &y=x;
int div;
div=x/y;
cout<<"The vlaue of div is..."<<div<<endl;


cout<<"following are the typecasting"<<endl;

float g=23.45f;
double j=23.45l;

cout<<g<<endl;
cout<<j<<endl;

cout<<"The value of (23.45) is..."<<sizeof(23.45)<<endl;
cout<<"The value of (23.45) is..."<<sizeof(23.45f)<<endl;
cout<<"The value of (23.45) is..."<<sizeof(23.45l)<<endl;
cout<<"The value of (23.45) is..."<<sizeof(23.45l)<<endl;
cout<<"The value of (23.45) is..."<<sizeof(23.45f)<<endl;

int H=23.45;
cout<<H<<endl;

char k='w';
cout<<int(k)<<endl;



const int A=45;
cout<<A<<endl;

cout<<"the value of a is "<<setw(4)<<a<<endl;
cout<<"the value of b is "<<setw(4)<<b<<endl;
cout<<"the value of c is "<<setw(4)<<c<<endl;


	return 0;
}
