#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	public:
		int age;
		string name;
		void setAge()
		{
			cout<<"\n\nEnter Age : ";
			cin>>age;	
		}	
		void setName()
		{
			cout<<"\n\nEnter Name : ";
			cin>>name;
		}
		int getAge()
		{
			return age;
		}
		string getName()
		{
			return name;
		}
		void calculateSalary()
		{
			setName();
			setAge();
		}
		void print()
		{
			cout<<"\nEmployee Name : "<<getName();
			cout<<"\nEmployee Age : "<<getAge();
		}
};
class salariedEmployee:public Employee
{
	public:
	float weeklysalary;
	void calculateSalary()
	{
		Employee::calculateSalary();
		cout<<"\n\nEnter Salary : ";
		cin>>weeklysalary;
	}
	void print()
	{
		Employee::print();
		cout<<"\nEmployee Salary : "<<weeklysalary;
	}
};
class hourlyEmployee:public Employee
{
	public:
	float hours,wage,salary;
	void calculateSalary()
	{
		Employee::calculateSalary();
		cout<<"\n\nEnter Hour : ";
		cin>>hours;
		cout<<"\n\nEnter Wage : ";
		cin>>wage;
		if(hours < 40)
		{
			salary = wage*hours;
		}
		else
		{
			salary = (40*wage)+((hours-40)*wage*1.5);
		}
		
	}
	void print()
	{
		Employee::print();
		cout<<"\nEmployee Salary : "<<salary;
	}
};
main()
{
	int i,j=0,k=0;
	char choice;
	cout<<"How many employee data you want to enter? ";
	cin>>i;
	salariedEmployee *obj1[i];
	hourlyEmployee *obj2[i];
	for(int a=0;a<i;a++)
	{
		cout<<"\n\nEnter Choice: S for SalariedEmp, H for HourlyEmp : ";
		cin>>choice;
		if(choice == 'S' || choice == 's')
		{
			obj1[j] = new salariedEmployee;
			obj1[j] -> calculateSalary();
			j++;
		}
		else if(choice == 'H' || choice == 'h')
		{
			obj2[k] = new hourlyEmployee;
			obj2[k] -> calculateSalary();
			k++;
		}
	}
	for(int a=0;a<j;a++)
	{
		cout<<"\n\nDisplaying Employee's Information:";
		cout<<"\n------------------------------------";
		obj1[a] -> print();
	}
	for(int a=0;a<k;a++)
	{
		cout<<"\n\nDisplaying Employee's Information:";
		cout<<"\n------------------------------------";
		obj2[a] -> print();
	}
	getch();
	return 0;
}
