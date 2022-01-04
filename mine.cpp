#include<iostream>
using namespace std;

class shop
{
	int itemid[100];
	int itemprice[100];
	int counter;

public:
	void initicounter();
	void setprice();
	void display();
};

void shop::setprice()
{

	cout<<"Enter the item id"<<endl;
	cin>>itemid[counter];
	cout<<"Enter the item price"<<endl;
	cin>>itemprice[counter];
     counter++;
}

void shop :: display()
{
	
	for(int i=0;i<counter;i++)
	{
		cout<<"The item id is "<<itemid[i]<<"The price of item  is"<<itemprice[i]<<endl;
		
	}
	
	
}

int main()
{
   shop Hassan;
   Hassan.initicounter();
   Hassan.setprice();
   Hassan.display();	
	
	
	return 0;
}
