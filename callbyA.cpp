#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int*x,int*y)
{
int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{

    int num1=10,num2=20;
    swap(num1,num2);
    cout<<"first num="<<num1<<endl;
    cout<<"second num="<<num2<<endl;
    return 0;

}
