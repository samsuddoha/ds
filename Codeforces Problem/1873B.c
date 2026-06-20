#include<stdio.h>
void solve(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min_index = 0;
    for(int i = 1; i < n; i++){
        if(arr[min_index] > arr[i]){
            min_index = i;
        }
    }
    arr[min_index]++;
    long long product = 1;
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }
    printf("%lld\n", product);
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}