#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number of array and searching element : ");
    scanf("%d %d",&n,&x);

    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //Linear Search
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("%d is found.",x);
            return 0;
        }
    }
    printf("%d is not found.",x);
    return 0;
}