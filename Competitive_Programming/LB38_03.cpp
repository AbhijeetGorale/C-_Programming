// write a generic program to accept N value and search first occurance of any specific value

// INPUT- 10,20,30,10,30,40,10,40,10
//VALUE OF SEARCH- 40
// OUTPUT-6

#include<iostream>
using namespace std;

template<class T>

int Search(T *arr,int iSize,T iNo)
{
    int i = 0 ;
    
    for(i = 0 ; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i + 1;     
        }
    }
    
}

int main()
{
    int iRet = 0 ;

    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    iRet = Search(arr,9,40);

    cout<<"First occurance is at :"<<iRet<<"\n";

    return 0 ;
}
