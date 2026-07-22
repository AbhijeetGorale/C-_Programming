//write a generic program to accept N values and count frequency of any specific value 

//INPUT - 10 20 30 10 30 40 10 40 10 
//VALUE TO CHECK - 10
// OUTPUT - 4

#include<iostream>
using namespace std;

template<class T>

int Frequency(T *arr,int iSize ,T iNo)
{
    int iCount = 0 ;
    int i = 0 ;

    for(i = 0; i < iSize;i++)
    {
        if(arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iRet = 0 ;

    int arr[] = {10,20,30,10,30,40,10,40,10};

    iRet = Frequency(arr,9,10);

    cout<<"Frequency is :"<<iRet<<"\n";

    return 0 ;
}