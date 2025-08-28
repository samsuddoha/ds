//linear search
#include<stdio.h>

int linearSearch(int A[],int K,int n){
  for(int i=0;i<n;i++){
        if(K==A[i]){
           return (i+1);
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter array elements number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //int n=sizeof(arr)/sizeof(arr[0]); 
    
    int searchKey;
    printf("Enter the search key :");
    scanf("%d",&searchKey);
    int isFound=linearSearch(arr,searchKey,n);

    if(isFound==0)
        printf("Data not found");
    else
        printf("Data is found in index: %d",isFound-1);

    return 0;
}

/*Input set:
input sample 1:

5
45 23 25 30 14
30

input sample 2:
7
24 18 25 30 51 60 75
35
*/