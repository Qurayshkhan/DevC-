#include<iostream>
using namespace std;
int main()
{
	int marks[5]={23,30,40,50,60};
	cout<<marks[2]<<endl;
//also use arrays like that......	
	int computermarks[5];
	 computermarks[0] = 56;
	 computermarks[1] = 90;
	 computermarks[2] = 88;
	 computermarks[3] = 65;
	 computermarks[4] = 54;
	
	//also change the value at any point
	
	computermarks[3]=12;
	
	cout<<"These are computer marks"<<endl;
	cout<<computermarks[0]<<endl;
	cout<<computermarks[1]<<endl;
	cout<<computermarks[2]<<endl;
	cout<<computermarks[3]<<endl;
	cout<<computermarks[4]<<endl;
	
	//using for loop.......
	int i=0;
	do
	
	{
	
	cout<<"the value of marks is " <<i<<":"<<marks[i]<<endl;
	i++;
	}
while(i<=4);

// pointers and arrays....

int *p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

/*cout<<"The value of *p is "<<*p<<endl;
cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is "<<*(p+3)<<endl;*/

	return 0;
	
	
	
}
