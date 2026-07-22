// write a generic program to find largest number from three number

#include<iostream>
using namespace std ;

template<class T>

T Max(T no1, T no2, T no3)
{
    if(no1 >= no2 && no1 >= no3)
    {
        return no1 ;
    }
    else if(no2 >= no1 && no2 >= no3)
    {
        return no2 ;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iRet ;

    iRet = Max(10,55,61);
    cout<<"Largest number is :"<<iRet<<"\n";

    iRet = Max(11,21,51);
    cout<<"Largest number is :"<<iRet<<"\n";
    

    return 0 ;

}