#include <iostream>
using namespace std;

/*Global variable*/
 int glow=67;
int main()
{
	int sum=56;
	int glow=9;
	cout<<"glow " <<glow<<endl;
	cout<< "my first program\n"<<sum<<endl;
	//program
	cout<<"My name is Hassan"<<endl;
	/*for end line*/
	cout<<"Hellow world"<<endl;
	
	/*Now we discous variable 
	 A variable is a container to hold DATA 
	 variable can be various types 
	1. int
	2. float
	3.char
	4. double
	5. boolean
	*/
	
	/* syntax for declearing variables in c++
	
	Data type variable name=value
	
	e.g int a=4,b=6;
	
	bases on scope variable can be classified into two types:
	1. local variable
	2. global variable
	*/
	/*Local variable are decleared inside the braces of any function and cam be accessed only from there
	  Global varibale are decelared outside any function and can be accessed from anywhere.
	  
	  yes local and global variable have same name..... 
	  
	  */
	  /*there are three type of data types
	  
	  built in
	  user-define
	  derived
	  */
	  
	/*user define 
	 struct
	 union 
	 enum
	
	
	*/
	/*
	derived data types 
	
	arrays
	
	functions
	
	pointers
	
	*/
	/*we practice int data type built in data type*/
	int a=14;
	int b=15;
	cout<<"Here the value of a is "<<a<<endl;
	cout<<"here the value of b is "<<b<<endl;
	bool is_true=true;
	cout<<glow << is_true<<endl;
	
	/*Today we learn getting input output*/
	
	int num1;
	int num2;
	
	cout<<"Enter 1st number"; /* << is called insertion */
	cin>>num1; /* >> is called extraction*/
	
	cout<<"Enter 2nd number"; /* << is called insertion */
	cin>>num2; /* >> is called extraction*/
	
	sum=num1+num2;
	cout<<"The value of sum is "<<sum<<endl;
	
		
	return 0;
	 } 
