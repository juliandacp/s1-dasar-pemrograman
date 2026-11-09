#include<stdio.h>
#define ll long long

void sort(ll arr[], ll n){
    ll low = 0;
    ll high = n - 1;
    ll mid = 0;
    while(mid <= high){
        if(arr[mid] == 0){
            ll temp = arr[low];
            arr[low++] = arr[mid];
            arr[mid++] = temp;
        }
        else if(arr[mid] == 1) mid++;
        else{
            ll temp = arr[mid];
            arr[mid] = arr[high];
            arr[high--] = temp;
        }
    }
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    sort(arr, n);
    
    for(ll i = 0; i < n; i++){
        printf("%lld", arr[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}