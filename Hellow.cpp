// Rafrence variable and typecasting--->

#include<iostream>


using namespace std;

int b=7;

int main()
{
	cout<<"Hellow world program"<<endl;

int a;
int b;
float div;
 cout<<"Enter any number" ;
 cin>>a;
 cout<<"Enter any number" ;
 cin>>b;
 div=a/b;
 cout<<"The value of div is "<<a/::b<<endl;//* :: calling globel variable *
 
 //refrence variable ----->
 
 int x=6;
 int & y=x; // & is used to refrence the variable--->
 int sum;
 sum=x+y;
 cout<<"The value of sum is "<<sum<<endl;
 
  //float double litreal---->
  
  float g=45.7f;
  double h=45.7l;
  
  cout<<"The value of 45.7 is "<<sizeof(45.7)<<endl;
  cout<<"the value of 45.7 is "<<sizeof(54.7f)<<endl; 
  cout<<"the value of 45.7 is "<<sizeof(54.7l)<<endl; 
  cout<<"the value of 45.7 is "<<sizeof(54.7f)<<endl; 
  cout<<"the value of 45.7 is "<<sizeof(54.7l)<<endl; 
  cout<<"the value of 45.7 is "<<sizeof(54.7f)<<endl; 
  cout<<"the value of 45.7 is "<<sizeof(54.7l)<<endl; 
  
  //typecasting---->
  
  int u=23;
  float v=46.98;
  
 int k;
  
  cout<<"The value of u is "<<float(u)<<endl;
  cout<<"The value of v is "<<int(v)<<endl;
  
  cout<<"The expression is "<<int(u)<<endl;
  cout<<"The expression is "<<u+int(v)<<endl;
  
  cout<<"the expression is "<<v+int(v)<<endl;
  
 return 0;
 
 
	
}
