// write a generic program to accept N values and search last occurance of any
// specific value

// INPUT - 10,20,30,10,30,40,10,40,10
// VValue to search - 40
//  OUTPUT - 8

#include<iostream>
using namespace std ;

template<class T>
int SearchLast(T *arr,int iSize,T iNo)
{
    int i = 0 ;
    int iPos = 0 ;

    for(i= 0 ; i < iSize ; i++)
    {
        if(arr[i] == iNo)
        {
            iPos = i + 1;
        }
    }
    return iPos ;
}

int main()
{
    int iRet = 0 ;

    int arr[] = {10,20,30,10,30,40,10,40,10};

    iRet = SearchLast(arr,9,40);

    cout<<"Last Occurance is:"<<iRet<<"\n";

    return 0 ;

}