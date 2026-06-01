#include<iostream>
using namespace std;


// Encapsulation 
class Marvellous 
{   
    // Access specifier  
    public : 
    int No1, No2;    // Charactaristics

  // Default constructor 
    Marvellous()
    {
        cout<<"Inside default constructor\n";

        No1 = 0;
        No2= 0;

        
    }
  // Paramaterised Constructor
     Marvellous(int A, int B)
    {
        cout<<"Inside Paramaterised default constructor\n";

        No1 = A;
        No2= B;

        
    }
        // Copy constructor


    Marvellous(Marvellous &ref)
    {
        cout<<"inside Copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;

    }

    // Destructor
    ~Marvellous()
    {

        cout<<"Inside Destructor\n";
    }

};

int main()
{
    cout<<"Inside Main\n";

    Marvellous mobj1;  // default constructor
    Marvellous mobj2(11,21);  // paramaterised constructor
    Marvellous mobj3(mobj2); // copy constructor 
    

    cout<<"End of Main\n";

    return 0;
}  // All destructors gets called

