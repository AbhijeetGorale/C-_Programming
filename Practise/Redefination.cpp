#include<iostream>
using namespace std ;


class Base 
{
    public :
        int I,J;

        void fun()
        {cout<<"Inside Base Fun\n";}

        void gun()
        {cout<<"Inside Base Gun\n";}

        void sun()
        {cout<<"Inside Base Sun\n";}
};  

class Derived : public Base
{
    public :
        int X,Y;

        void fun()   // Redefination of fun method
        {cout<<"Inside Derived Fun\n";}

        void sun()
        {cout<<"Inside Derived Sun\n";}

        void run()  // defination
        {cout<<"Inside Derived run\n";}

};  

int  main()
{
    Base *bp = NULL;

    bp = new Derived() ;  // Upcasting

    bp -> fun();  // Base Fun()
    bp -> gun();  // Base gun
    bp-> sun();   // Base Sun()
    //bp -> run();  // Error

    return 0;
}
