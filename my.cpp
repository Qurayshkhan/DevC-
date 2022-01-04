#include<iostream>
using namespace std;
int main()
{
/*	int a;
	cout<<"Enter any number"<<endl;
	cin>>a;
	if(a<=20)
	{
		cout<<"You are young...."<<endl;
	}
	else if(a>20)
	{
		cout<<"You are old"<<endl;
		
	}
	else{
		
		cout<<"Wrong input"<<endl;
	}*/
	
  /*int days;
  cout<<"Enter any number....."<<endl;
  cin>>days;
  switch (days){
  	case 1:
  		cout<<"today is friday...."<<endl;
  		break;
  		case 2:
  			cout<<"today is satuarday......"<<endl;
  	         break;
  	         default:
  	         	cout<<"wrong input..."<<endl;
				   }	*/
	
	/*int i=1;
	for(i=1;i<=10;i++)
	{
		cout<<i<<endl;
		
	}*/
	
	/*int j=1;
	while(j<=20)
	{
		cout<<j<<endl;
		j++;
	}*/
	
	int i=1;
	int n;
	int result;
	cout<<"enter any number"<<endl;
	cin>>n;
	do
	{
		result=i*n;
		cout<<i<<"*"<<n<<"="<<result<<endl;
		i++;
	}
	while(i<=40);
	
	return 0;
}
