//declearation section of header file, all function listed here
int linearSearch(int A[],int K,int n);
int binarySearch(int A[],int sKey,int n);

//following is the definition section of header file (all function defined here)

//linear Search code
int linearSearch(int A[],int K,int n){
  for(int i=0;i<n;i++){
        if(K==A[i]){
           return i;
        }
    }
    return -10;
}
//Binary Search code
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
