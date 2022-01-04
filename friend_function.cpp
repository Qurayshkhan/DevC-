#include<iostream>
using namespace std;
// if you want access data from private you need permession from private data using friend function.....
//1+4i
//5+8i
//6+8i
//complex number
class complex
{
	int a,b;
public:
	void setnumber(int n1, int n2)
	{
		a=n1;
		b=n2;
		
	}

//below lines means that non-member .. sumcomplex function is allowed to do anything 
friend complex sumcomplex(complex o1,complex o2);
	void printnumber()
	{
		cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		
		
	}
	
};
// this function return complex number....
complex sumcomplex(complex o1, complex o2)

{
  complex o3;
  
  
  o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
  
  return o3;
  
}

int main()
{

complex c1,c2,sum;

c1.setnumber(3,5);
c1.printnumber();


c2.setnumber(3,6);
c2.printnumber();
	
sum=sumcomplex(c1,c2);
sum.printnumber();
	return 0;
	
	
}

/*properties of friend fucntions

not in the scope of class 

since it is not in the scope of class ,it cannot be called from object of that class.  c1.sumcomplex ()==invalid

can be invoke without the help of any subject 

usually contains the arguments as objects....

can be declear inside public or private section class 

*/
