//Binary Search code
#include<stdio.h>
#include"searching.h" //including custom header file

int main()
{
    int n;
    printf("Enter array elements number :");
    scanf("%d",&n);
    int arr[n]; //array deceleration
   printf("Enter all elements:");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int searchKey;
   printf("Enter the search key :");
    scanf("%d",&searchKey);

    //call one function at a time to check both searching algorithms
    int isFound=binarySearch(arr,searchKey,n);
    // int isFound=linearSearch(arr,searchKey,n);

    if(isFound<0)
        printf("The data not found.\n");
    else
        printf("The data is found in index: %d",isFound);

    return 0;
}


/*Sample input and output
input sample for binary search (ordered data):
6
10 18 25 35 50 75
35

input sample linear search (unordered data):
7
76 21 25 32 50 15 37
15
*/
