
//oops classes and objects
	
//c++--> initially called --> c with classes by stroustroup
//class -->extension of structure in (C)
//structures had limitations
     // members are public 
	 // no methods
	 
// classes -->structure +more
//classes -->can have methods and properties
//classes -->can have memebers private and few publics
//structure is c++ are typedefed
//you can declare objects along with the class decelaration like this :
/*class employee

{
   //class defenation 
}Hassan,hassam,umer;
*/
//Hassan.sallery =8 makes no sense if selary is private	 	
	
	//nesting of member function




#include<iostream>
#include<string>
using namespace std;

class binary 
{

private://by default private in classes
	string s;
	

public:
  void read();
  void check_bi();
  void once_compliment();
  void display();
};

void binary::read()
{
	cout<<"Enter any number"<<endl;
	cin>>s;
}

void binary:: check_bi()
{
	
for(int i=0;i<s.length();i++)
{
	
	if(s.at(i)!='0'&& s.at(i)!='1')
	{
		cout<<"Incorrect binary number"<<endl;
		exit(0);
		
	}
	
	
	}	
	
}

void binary :: once_compliment()
{
	int i=0;
	for(i=0; i<s.length();i++)
	{
		if(i=s.at(i)='O')
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
	    }
	}
	
}

void binary ::display()
{
	cout<<"Displaying your binary numbers"<<endl;
	for(int i=0; s.length();i++)
	{
		cout<<s.at(i);
		
		cout<<endl;
	}
	
}
int main()
{

	
binary b;
b.read();
b.check_bi();	
b.once_compliment();
b.display();	
	
	return 0;
	
}



