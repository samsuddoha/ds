//bubble sort
#include<stdio.h>
#include "sorting.h"

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


/*Create a headerfile with the following functions
name.h

max(), min (), prime(), odd(), even(), sum(), int digitSUm(int a), 
int reverseNUmber(int a), plaindrome()
Number system: decimanlToBinary()
*/

