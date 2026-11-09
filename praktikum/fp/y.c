#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll arr[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &arr[i]);
    
    ll all_negative = 1;
    for(ll i = 0; i < n; i++){
        if(arr[i] >= 0){
            all_negative = 0;
            break;
        }
    }
    
    if(all_negative){
        ll max_val = arr[0];
        ll max_idx = 0;
        for(ll i = 1; i < n; i++){
            if(arr[i] > max_val){
                max_val = arr[i];
                max_idx = i;
            }
        }
        if(max_val == 0) printf("No usable signal detected! The fragment dissolves into pure static!\n");
        else printf("Critical instability detected with energy drain of %lld! The Dombest fragment is collapsing!\n", -max_val);
        printf("CODE: %lld\n", max_val);
        return 0;
    }
    
    ll max_end = arr[0];
    ll max_temp = arr[0];
    ll start = 0, end = 0, temp_start = 0;
    
    for(ll i = 1; i < n; i++){
        if(arr[i] > max_end + arr[i]){
            max_end = arr[i];
            temp_start = i;
        }
        else max_end = max_end + arr[i];
        
        if(max_end > max_temp){
            max_temp = max_end;
            start = temp_start;
            end = i;
        }
    }
    
    if(max_temp > 0) printf("Peak energy resonance at %lld! Clearance granted, Dombest archives unlocked!\n", max_temp);
    else if(max_temp < 0){
        ll max_val = arr[0];
        ll max_idx = 0;
        for(ll i = 1; i < n; i++){
            if(arr[i] > max_val){
                max_val = arr[i];
                max_idx = i;
            }
        }
        if(max_val == 0){
            printf("No usable signal detected! The fragment dissolves into pure static!\n");
            printf("CODE: 0\n");
        }
        else{
            printf("Critical instability detected with energy drain of %lld! The Dombest fragment is collapsing!\n", -max_val);
            printf("CODE: %lld\n", max_val);
        }
        return 0;
    }
    else printf("No usable signal detected! The fragment dissolves into pure static!\n");
    
    printf("CODE: ");
    for(ll i = start; i <= end; i++){
        printf("%lld", arr[i]);
        if(i < end) printf(" ");
    }
    printf("\n");
    
    return 0;
}