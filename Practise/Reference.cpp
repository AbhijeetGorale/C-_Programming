#include<iostream>
using namespace std;

int main()
{
    int No = 11;
    int &X = No;

    cout<<"Value of No :"<<No<<"\n";  //11
    cout<<"Value of X:"<<X<<"\n";     //11

    cout<<"Address of no :"<<&No<<"\n"; //100
    cout<<"Address of X :"<<&X<<"\n";  //100

    cout<<"Size of No:"<<sizeof(No)<<"\n"; //4
    cout<<"Size of X:"<<sizeof(X)<<"\n";  //4


    return 0;
}

