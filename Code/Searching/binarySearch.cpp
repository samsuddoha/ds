//Binary Search code
#include<stdio.h>

int binarySearch(int A[],int sKey,int n){
  int leftIndex=0;
  int rightIndex=n-1;
  int midIndex;

  while(leftIndex<=rightIndex){
      midIndex=(leftIndex+rightIndex)/2;
      if(sKey==A[midIndex])
        return midIndex;
      else if(sKey>A[midIndex])
        leftIndex=midIndex+1;
      else
        rightIndex=midIndex-1;
  }
  return -10;
}
int main()
{
    int n;
    //printf("Enter array elements number :");
    scanf("%d",&n);
    int arr[n]; //array deceleration
   // printf("Enter all elements:");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int searchKey;
   // printf("Enter the search key :");
    scanf("%d",&searchKey);
    int isFound=binarySearch(arr,searchKey,n);

    if(isFound<0)
        printf("The data not found.\n");
    else
        printf("The data is found in index: %d",isFound);

    return 0;
}


/*Sample input and output
input sample 1:
6
10 18 25 35 50 75
35

input sample 2:
5
10 20 25 30 50
60
*/
