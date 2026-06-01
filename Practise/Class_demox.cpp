#include<iostream>
using namespace std ;

class Demo
{
    public :                            // if not written default as private

    int i ;   //charactaristics
    float f ;    //charactaristics

    void fun()   // Behaviour
    {
        cout<<"Inside fun\n";
    }

};

int main()
{

    Demo dobj;

    cout<<sizeof(dobj)<<"\n";        //8

    return 0;
}