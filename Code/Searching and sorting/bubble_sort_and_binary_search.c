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

    printf("Original array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Bubble Sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    //Binary Search
    int l=0,r=n-1;
    while (l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
            printf("%d is found.",x);
            return 0;
        }
        else if(arr[mid]>x)r=mid-1;
        else l=mid+1;
    }
    printf("%d is not found.",x);
    return 0;
}