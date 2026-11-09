#include<stdio.h>
#define ll long long

int main(){
    ll n, sum = 0;
    ll total = 0;
    scanf("%lld", &n);
    ll arr[n];
    
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    
    double mean = sum / (double)n;
    
    for(ll i = 0; i < n; i++){
        if(arr[i] > mean){
            printf("%lld ", arr[i]);
            total += 1;
        }
    }
    
    if(total == 0) printf("Tidak ada");
    printf("\n");
    
    return 0;
}