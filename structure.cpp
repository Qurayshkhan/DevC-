#include<iostream>
using namespace std;

struct student 
{
	int sid;
	float sfee;
	char schar;
};
//only use 1 data type
union money

{
	int rice;
	float sall;
	char car;
};


int main()
{
union money m1;
m1.rice=45;
cout<<m1.rice<<endl;



	
struct student hassan;

hassan.sid=12;
hassan.sfee=2250;
hassan.schar='M';

cout<<"Hassan id is "<<hassan.sid<<endl;
cout<<"Hassan sfee is "<<hassan.sfee<<endl;
cout<<"Hassan schar is "<<hassan.schar<<endl;

enum car{bmw,pradow,honda};
car c1=bmw;
cout<<(c1==1)<<endl;
cout<<bmw<<endl;
cout<<pradow<<endl;
cout<<honda<<endl;


return 0;
}
