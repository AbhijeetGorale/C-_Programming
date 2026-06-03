#include<iostream>
using namespace std ;

class Demo
{
    public :                            

    int i ;   
    float f ; 
    
    Demo()            //Constructor
    {
        cout<<"Inside Constructor";
        i = 0;
        f = 0.0f;
    }
    ~Demo()            // Destructor   //(~) Negate operator
    {
        cout<<"Inside Destructor\n";
    }

    void fun()   // Behaviour
    {
        cout<<"Inside fun\n";
    }

};

int main()
{

    cout<<"Inside main\n";

    Demo dobj;        // object cretion

    cout<<"\n"<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of main\n";

    return 0;
}