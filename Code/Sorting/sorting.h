
void bubbleSort(int arr[],int n);
void SelectSort(int A[], int n);


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

 void SelectSort(int A[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(min!=i){
           // swap(A[i], A[min]);
            int temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}