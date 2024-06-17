#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{

    int length;
    int breadth;

};
int main() {
 struct rectangle *p;
p=new rectangle;
p->length=15;
p->breadth=5;
 cout<<p->length<<endl;
 cout<<p->breadth<<endl;
 return 0;

}
