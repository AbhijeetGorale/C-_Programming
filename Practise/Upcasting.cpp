#include<iostream>
using namespace std ;


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

int  main()
{
    Base *bp = NULL;

    Derived dobj;

    bp = &dobj ;  // Upcasting
    

    return 0;
}
