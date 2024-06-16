#include<iostream>
#include<stdlib.h>
using namespace std;

 void swao( int &x,int &y)
 {
    int temp;
    temp=x;
    x=y;
    y=temp;


 }
int main()
{ int num1=20,num2=30;
swap(num1,num2);
cout<<"first num"<<num1<<endl;
cout<<"second num"<<num2<<endl;
 return 0;

}
