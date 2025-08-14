//Find a prime number from an array
#include<stdio.h>

int isPrime(int num){
    if(num<=1) return 0;
    for(int i=2;i<num;i++){
        if(0==num%i) return 0;
    }
    return 1;
}

int main(){
    int numbers[20];
    int n;
    printf("How many number you want to take?: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d", &numbers[i]);
    }
    //find prime numbers
    for(int i=0;i<n;i++){
        int prime=isPrime(numbers[i]);
        if(1==prime){
          printf("%d ",numbers[i]);
        }
    }

return 0;
}
