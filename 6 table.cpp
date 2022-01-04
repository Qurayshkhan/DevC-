#include<iostream>
using namespace std;
int main()
{
   int i=1;
   int n;
   int result;
   cout<<"Enter any number"<<endl;
   cin>>n;
   do
   {
   	result=n*i;
   	  cout<<n<<"*"<<i<<"="<<result<<endl;
   	  i++;
   	  
   	}	
     while(i<=10);
     
	
	return 0;
	
}
