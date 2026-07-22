// write a generic program ti accept N values and reverse the content

// INPUT - 10,20,30,10,30,40,10,40,10
//OUTUT - 10,40,10,40,30,10,30,20,10

#include<iostream>
using namespace std ;

template<class T>

void Reverse(T*arr,int iSize)
{
    T *start =  arr;
    T *end = arr + iSize - 1 ;
    T temp ; 

    while(start < end)
    {
        temp = *start ;
        *start = *end ;
        *end = temp ;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0 ; i < 9; i++)
    {
        cout<<arr[i]<<"\n";
    }

    Reverse(arr,9);

    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<arr[i];
    }

    return 0 ;
}