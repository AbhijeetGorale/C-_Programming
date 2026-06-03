#include<iostream>
using namespace std;


class Base
{
    protected :
        int i,j;

    public :
        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 0;
            j = 0;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int X ;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            X = 0 ;

        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }


        void gun()
        {
            cout<<"Inside Gun Of Derived\n";
        }

};

int main()
{
    cout<<"Inside Main\n";

    Derived dobj;

    cout<<"Size of Base Class  object is :"<<sizeof(Base)<<"\n";    //8
    cout<<"Size of Derived Class object is :"<<sizeof(Derived)<<"\n"; //12

    //cout<<dobj.i<<"\n";  //ERROR
    //cout<<dobj.j<<"\n";  //ERROR
    cout<<dobj.X<<"\n";  //0

    cout<<"End Of Main\n";

    return 0;
}