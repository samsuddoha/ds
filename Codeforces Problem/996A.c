#include<stdio.h>
int main (){

int n;
scanf("%d",&n);

int total_bills =0;


total_bills +=n/100;
n=n%100;

total_bills +=n/20;
n=n%20;

total_bills +=n/10;
n=n%10;

total_bills +=n/5;
n=n%5;


total_bills +=n/1;
n=n%1;

printf("%d",total_bills);

return 0;

}
