// write a generic program to accept N number from user 
// and return addition of that values 

#include<iostream>
using namespace std ;

template <class T>

T Add(T *arr, int iSize)
{
    T Sum = 0;

    int i ;

    for(i = 0 ; i < iSize ; i++)
    {
        Sum = Sum + arr[i];
    }

    return Sum ;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = Add(arr,5);
    cout<<"Summation of all elements is :"<<iSum<<"\n";

    float fSum = Add(brr,4);
    cout<<"Summation of all elements is :"<<fSum<<"\n";

    return 0 ;


}