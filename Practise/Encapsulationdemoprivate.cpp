#include<iostream>
using namespace std;


// Encapsulation 
class Marvellous 
{   
    // Access specifier( By default private)
      

    int No1, No2;    // Charactaristics

    void fun()   // Behaviour
    {

        cout<<"Inside Fun\n";
    }

    void gun ()    // Charactaristics

    {

        cout<<"Insidde Gun\n";
    }


};

int main()
{
    // object creation instance

    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";

    cout<<mobj1.No1<<"\n";

    cout<<mobj1.fun();
    cout<<mobj2.fun();

    mobj1.gun();


    return 0;
}

