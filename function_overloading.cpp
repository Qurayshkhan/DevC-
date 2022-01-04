#include<iostream>
using namespace std;

int sum(float a, int b)
{
     	
 cout<<"Using function with 2 arguments "<<endl;
 return a+b; 
}

int sum(int a, int b,int c)
{
	cout<<"Using function with 3 arguments"<<endl;
	return a+b+c;
}
//caleculate the volume of cylender
int volume(double r, int h)
{
	return (3.14 * r*r*h);
}
//caleculate the volume of a cube...
int volume(int a)
{
	
	return a*a*a;
}
//rectangular box

int volume(int l,int b, int h)
{
	return (l*b*b);
}

int main()
{
	cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
	cout<<"The sum of 3 and 6 and 5 is "<<sum(3,6,5)<<endl;
	cout<<"The volume of cubeiod of 3 and 6 and  is "<<volume(3,6,7)<<endl;
	cout<<"The volume of cubeiod of 3 and 6 and 7  is "<<volume(3,6,7)<<endl;
	
	return 0;
	
}
