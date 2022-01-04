// making friend class with another class....
#include<iostream>
using namespace std;

//forward deceleration
class complex;


class caleculator


{
	public:
	int add(int a,int b)
{
		return (a+b);
}

int sumrealcomplex(complex , complex );//define this function in the end.....
int sumcocomplex(complex , complex );//define this function in the end.....

};

class complex
{
	int a;
	int b;
friend class caleculator;
//	friend int caleculator :: sumrealnumber(complex ,complex ); // making friend with and other class....

	public:
	void setdata(int n1, int n2)
	{
	   a=n1;
	   b=n2;
	}
	
	void printnum()
	{
	  cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;	
	}

};

	int caleculator::sumrealcomplex(complex o1,complex o2)
{


return (o1.a + o2.a);

}

int caleculator::sumrealcomplex(complex o1,complex o2)
{


return (o1.b + o2.b);

}

int main()
{
	complex o1,o2;
	
	o1.setdata(3,5);
	o2.setdata(8,9);
	
	caleculator calc;
	int res=calc.sumrealcomplex(o1,o2);
	cout<<"THE SUM REAL PART OF O1 AND O2 IS "<<res<<endl;
	int resc=calc.sumrealcomplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<resc<<endl;
	return 0;
}
