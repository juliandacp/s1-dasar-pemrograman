#include<stdio.h>
#include<stdbool.h>
#define ll long long

ll freq[200005];

void swap(ll *xp, ll *yp){
    ll temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){
    ll n;
    bool swapped;
    scanf("%lld", &n);
    
    for(ll i = 0; i < 200005; i++) freq[i] = 0;
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        freq[arr[i] + 100000]++;
    }
    
    for(ll i = 0; i < n; i++){
        swapped = false;
        for(ll j = 0; j < n - i - 1; j++){
            if(freq[arr[j] + 100000] < freq[arr[j + 1] + 100000]){
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
            else if(freq[arr[j] + 100000] == freq[arr[j + 1] + 100000] && arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    
    for(ll i = 0; i < n; i++){
        printf("%lld", arr[i]);
        if(i != n - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}