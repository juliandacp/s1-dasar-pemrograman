#include <stdio.h>
#define ll long long

int main(){
    ll n, data[100];
    scanf("%lld", &n);
    
    for(ll i = 0; i < n; i++){
        scanf("%lld", &data[i]);
    }
    
    ll max = data[0], min = data[0];
    for(ll i = 1; i < n; i++){
        if(data[i] > max) max = data[i];
        if(data[i] < min) min = data[i];
    }
    
    ll diff = max - min;
    
    printf("%lld\n", diff);
    
    return 0;
}