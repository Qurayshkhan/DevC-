//poniters....
//data type which holds the adress of other data type......
#include<iostream>
using namespace std;
main()
{

int a=3;
int *b=&a;
b =&a;

// &---->(adress of) operator....
cout<<"the adress of a is "<<&a<<endl;
cout<<"the adress of b is "<<b<<endl;

// * ---->(value at)dereference operator....

cout<<"the value at adress b is "<<*b<<endl;

//pointer to pointer....

int **c =&b;

cout<<"The value of b is "<<&b<<endl;
cout<<"the value of c is "<<*c<<endl;
cout<<"the value at adress value_at (c) is "<<**c<<endl;



return 0;


}


