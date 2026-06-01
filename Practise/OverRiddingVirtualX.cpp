#include<iostream>
using namespace std ;


class Base 
{
    public :
        int I,J;

        void fun()  //1000
        {cout<<"Inside Base Fun\n";}

        virtual void gun()  //2000
        {cout<<"Inside Base Gun\n";}

        virtual void sun() //3000
        {cout<<"Inside Base Sun\n";}
};  

class Derived : public Base
{
    public :
        int X,Y;

        void fun()   // 4000
        {cout<<"Inside Derived Fun\n";}

        void sun() //5000
        {cout<<"Inside Derived Sun\n";}

        virtual void run()  // 6000
        {cout<<"Inside Derived run\n";}

};  

int  main()
{  
    Base *bp = new Derived();  // Upcasting

    bp -> fun();  // Base fun
    bp -> gun(); //  Base gun 
    bp -> sun(); // Derived sun
    //bp -> run(); // Error

    return 0;
}
