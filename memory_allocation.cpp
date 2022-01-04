#include<iostream>
using namespace std;

class shop
{
		int itemid[100];
		int itemprice[100];
     	int counter;

public :
	void initcounter(void){ counter=0;}
	void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
	cout<<"Enter id of your item "<<endl;
	cin>>itemid[counter];
	cout<<"enter price of your item "<<endl;
	cin>>itemprice[counter];
	counter++;
}

void shop::displayprice()
{
   for(int i=0;i<counter;i++)
   {
   	
   	cout<<"The price of item id is "<<itemid[i]<<"is"<<itemprice[i]<<endl;
   }	
	
}




int main()
{
	
shop mall;
mall.initcounter();
mall.setprice();
mall.setprice();
mall.setprice();
mall.displayprice();

return 0;	
}
