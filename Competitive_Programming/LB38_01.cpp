// write generic program which accept one value and one number from user 
// print that value that number of times on screen 

// M 7
// M M M M M M M

// 11 3
// 11 11 11 

// 3.7 6 
// 3.7 3.7 3.7 3.7 3.7 3.7

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{

    int i = 0;

    for(i = 1 ; i <= iSize; i++)
    {
        cout<<value<<endl ;
    }
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0 ;
}