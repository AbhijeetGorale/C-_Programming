// write a generic program to accept N values from user and return largest value

#include<iostream>
using namespace std ;

template<class T> 
T Max(T *arr,int iSize)
{
    T iValue = arr[0];
    int i = 0 ;

    for(i = 1; i < iSize ; i++)
    {
        if(arr[i] > iValue)
        {
            iValue  = arr[i];
        }
    }
    return iValue ;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.4,3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<"largest value is :"<<iRet<<"\n";

    float fRet = Max(brr,4);
    cout<<"Largest value is :"<<fRet<<"\n";

    return 0 ;
}