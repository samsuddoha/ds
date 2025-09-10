//bubble sort
#include<stdio.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
                flag=1;       
            }
        }
        if(!flag) break;
    }
 }
void printArray(int a[], int n){
     for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
    
return 0;

}


/* sample input

5
23 12 56 87 45

*/