#include<iostream>
using namespace std ;


class Base 
{
    public :
        int I,J;

        void fun()
        {cout<<"Inside Base Fun\n";}

        virtual void gun()
        {cout<<"Inside Base Gun\n";}

        virtual void sun()
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

        virtual void run()  // defination
        {cout<<"Inside Derived run\n";}

};  

int  main()
{  
    cout<<sizeof(Base)<<"\n";   // 8
    cout<<sizeof(Derived)<<"\n"; // 16  
    

    return 0;
}
