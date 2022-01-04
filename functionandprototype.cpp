#include<iostream>
using namespace std;



//functions

int sum(int a, int b)
{
	int c=a+b;
	return c;
}

//function prototype

//syntext type finction-name (arguments)...


//int sum(int a, int b)
//int sum(int,int) acceptable

//formal variable a and b will be taking value from actual paramaters n1 and n2......
void g(void);
int main()
{
	
	int n1;
	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	int n2;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	//n1 and n2 are actual parameters...
	cout<<"The value of 1st and 2nd number is "<<sum(n1,n2)<<endl;
	 g();
	return 0;
}

void g(){
	
	cout<<"Hellow..Good morning...";
	
}
