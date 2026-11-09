#include<stdio.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll n;
    double sum = 0;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    
    double avg = sum / (double)n;
    ll total = 0;
    
    for(ll i = 0; i < n; i++) if(arr[i] > avg) total++;
    
    printf("%lld\n", total);
    
    return 0;
}