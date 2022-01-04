#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int c=a+b;
	return c;
}
// not change the value
void swap(int a, int b)
{
	int t=a;
	a=b;
	b=t;
}
//call by refrence using pointers
void swappointer(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

//call by refrence using refrence variable....

void swaprefrencevar(int &a , int &b)

{
	
	int t=a;
	a=b;
	b=t;
	
}

/*int & swaprefrencevar(int &a , int &b);

{
	
	int t=a;
	a=b;
	b=t;
	return a;
}
*/


void g(void);


int main()
{
	
	int x=9;
	int y=5;

cout<<"The value of x is "<<x<< "the value of y is "<<y<<endl;

//swappointer(&x,&y);//this will change the value using refrence pointers.....
//swaprefrencevar(x,y);
swaprefrencevar(x,y)=766;
cout<<"the value of x is " <<x<< "the value of y is "<<y<<endl;



return 0;
	
}

 void g()
 {
 	cout<<"My name is Hassan";
 	
 }
