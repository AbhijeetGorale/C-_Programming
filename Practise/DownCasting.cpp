#include<iostream>
using namespace std ;

int  main()
{
    Derived *dp = NULL;

    Base bobj ;

    dp = &bobj;  //Downcasting



    return 0;
}

class Base 
{
    public :
        int I,J;


};  //8 Bytes

class Derived : public Base
{
    public :
        int X,Y;



};  // 16 Bytes
