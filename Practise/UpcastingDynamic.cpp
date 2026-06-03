#include<iostream>
using namespace std ;

int  main()
{
    Base *bp = NULL;

    bp = new Derived() ;  // Upcasting

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
