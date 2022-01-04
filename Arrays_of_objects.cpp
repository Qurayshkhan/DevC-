//Arrays of objects..



#include<iostream>
using namespace std;

class employee
{
	int id;
	int sallary;
	public:
		void setid(void)
		{
			sallary=122;
			cout<<"Enter the id of employee";
		    cin>>id;
		}
	
	void getid()
{
	
	cout<<"The id of employee is "<<id<<endl;
}

	
};



int main()
{
//	employee hassan,hamza,khan,Tayyab;
	
//	hassan.setid();
//	hassan.getid();
	
	
	employee fb[4];
	for(int i=0;i<4;i++)
	{
		fb[i].setid();
		fb[i].getid();
		
	}
	
	return 0;
	
	
}
