#include<iostream>
using namespace std;

int main()
{
    // We Can Create One Reference To One Variable
    int no = 11;
    int &x = no;

    // we can create multiple referrences for single variable
    int &y = no;

    // we can create refefrence to reference
    int &z = y;

    // we can create reference to pointer
    int *p = &no;

    int *(&q)=p;



    return 0;
}

