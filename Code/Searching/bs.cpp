#include<stdio.h>

int binarySearch(int arr[], int N, int SK){
    int LI=0;
    int RI = N-1;
    int MI;
    while(LI<=RI){
        MI=(LI+RI)/2;
        if(SK==arr[MI]) 
            return MI;
        else if(SK>arr[MI])
            LI=MI+1;
        else
            RI=MI-1;
    }
    return -1;
}

int main()
{
    int N;
    //printf("Enter the size of array.");
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N;i++){
        scanf("%d", &A[i]);
    }
    int searchKey;
    scanf("%d", &searchKey);
    int isFound=binarySearch(A, N, searchKey);
    if(isFound<0) 
        printf("Not found");
    else 
        printf("%d is found in %d\n", searchKey,isFound);
    return 0;
}

/*
5
10 23 34 56 76
56

10
12 13 14 17 19 20 23 25 67 78
67

4
12 23 45 56
100

*/