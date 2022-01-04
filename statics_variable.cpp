//static data members and statics function....
//life time =program terminate..

#include<iostream>
using namespace std;

class employee
{
	int id;
	static int count;//default value is zero and it is called class variable....
  public :
  void setdata()
  {
  	cout<<"enter the id"<<endl;
    cin>>id; 
    count++;
 }	
void getdata()
{
	cout<<"the id of this employee is "<<id<<"And this is employee number"<<count<<endl;
	
}	

static 	void getcount()//static function....
	{
		
	cout<<"the value of count is "<<count<<endl;	
		
	}
	
};

int employee::count=1000;//if you want u change value but if declare out of the class....

int main()
{
	
	employee hassan,adil,faiz;
//you can also use function by using scope resoloution operator :: with class name.
hassan.setdata();
hassan.getdata();
employee::getcount();

adil.setdata();
adil.getdata();
employee::getcount();

faiz.setdata();
faiz.getdata();
employee::getcount();
return 0;	
}
