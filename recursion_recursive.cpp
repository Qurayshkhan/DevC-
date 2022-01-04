#include<iostream>
using namespace std;


int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*(n-1);
}


int fib(int b)
{

	if(b<=1)
	{
	   return 1;
    }
		return fib(b-2)+fib(b-1);
}

int main()
{
	
	int a;
	cout<<"Enter any number"<<endl;
	cin>>a;
	
	//cout<<"The value of factorial is "<<factorial(a)<<endl;
cout<<"The value of fibnachi at position"<<a<<fib(a)<<endl;	
	return 0;
}
