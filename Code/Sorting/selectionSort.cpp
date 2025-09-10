//selection sort
#include<stdio.h>

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                   min_index=j; 
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
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
    selectionSort(arr,n);
    printArray(arr,n);
    
return 0;

}


/* sample input

5
23 12 56 87 45

*/