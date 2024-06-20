#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int a[5]={2,5,7,8,9};
int *p;
int i;
p=new int[5];
p[0]=8;
p[1]=4;
p[2]=7;
p[3]=5;
p[4]=3;
for(i=0;i<5;i++)
    printf("%d\n",a[i]);
printf("\n");
for(i=0;i<5;i++)
    printf("%d\n",p[i]);
return 0;


}
