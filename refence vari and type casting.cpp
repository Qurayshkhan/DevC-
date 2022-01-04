#include<iostream> 

Using namespace std;

Int c = 45;

Int main()
{
    
    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das--' Monty ---' Rohu ----' Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
    Int a = 45;   
    Float b = 45.46;
    Cout<<"The value of a is "<<(float)a<<endl;
    Cout<<"The value of a is "<<float(a)<<endl;

    Cout<<"The value of b is "<<(int)b<<endl;
    Cout<<"The value of b is "<<int(b)<<endl;
    Int c = int(b);

    Cout<<"The expression is "<<a + b<<endl;
    Cout<<"The expression is "<<a + int(b)<<endl;
    Cout<<"The expression is "<<a + (int)b<<endl;


    Return 0;
}


