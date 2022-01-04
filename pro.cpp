#include<iostream>
using namespace std;
int main()
{
	int cars[3]={23,45,55};
	cout<<cars[2]<<endl;
	
	int numbers[4];
	
	numbers[0]=34;
	numbers[1]=45;
	numbers[2]=55;
	numbers[4]=78;
	
	
	cout<<numbers[0]<<endl;
	cout<<numbers[1]<<endl;
	cout<<numbers[2]<<endl;
	cout<<numbers[3]<<endl;
	
	int i=0;
	for(i=0;i<=4;i++)
	
		if(i==2)
		{
			
			
			
		
		cout<<i<<"="<<numbers[i]<<endl;
		
		if(i==2)
		continue;
		
			}	
	
	
	
	return 0;
	
	
	
}
