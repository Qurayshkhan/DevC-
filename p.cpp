#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *b=&a;
	
	cout<<"the adress of a is"<<&a<<endl;
	cout<<"the adress of b is"<<b<<endl;
	
	
	cout<<"the value at adress a is "<<a<<endl;
	cout<<"the value at adress b is "<<*b<<endl;
	
	return 0;
}
