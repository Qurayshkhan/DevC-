#include<iostream>
using namespace std;

inline int mul(int a,int b)
{
	
	return a*b;
	
	
}
// default arguments..

  float moneyreceived(int currentmoney, float factor=1.04)
{
   	
return 	currentmoney*factor;
}

/*int  strlen(const char*p)// constatnt arguments
{
}*/  
int main()
{
	/*int a,b;
	cout<<"Enter any number";
	cin>>a>>b;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;
	cout<<"The mul is a and b is "<<mul(a,b)<<endl;*/
	// now talk about where inline not use.....
	/*
	    int product(int a, int b)
	    {
		
		statics int c=0;//this can be execute only once....
		c= c+1; //next time this fuction is run the value of c will be retained....
		return a+b+c;
	}*///not recomanded to use below lines with inline functions...
	
	int money=500000;
	cout<<"your account balance is "<<money<<"\nafter year you will receive "<<moneyreceived(money)<<endl;
	cout<<"your account balance is for vip "<<money<<"\nafter year you will receive "<<moneyreceived(money,1.1)<<endl;
return 0;
	
}
