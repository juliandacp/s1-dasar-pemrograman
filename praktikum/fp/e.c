#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

char res[1000005];
ll count_arr[10][1000005];

ll f(ll x){
    if(x == 0) return 1;
    if(x % 10 == 0) return f(x / 10);
    return (x % 10) * f(x / 10);
}

ll g(ll x){
    while(x >= 10) x = f(x);
    return x;
}

int main(){
    ll q;
    scanf("%lld", &q);
    
    for(ll i = 1; i <= 1000000; i++) res[i] = g(i);
    for(ll i = 1; i <= 9; i++) count_arr[i][0] = 0;
    
    for(ll i = 1; i <= 1000000; i++){
        for(ll j = 1; j <= 9; j++){
            count_arr[j][i] = count_arr[j][i - 1] + (res[i] == j);
        }
    }
    
    while(q--){
        ll c, g_val, k;
        scanf("%lld %lld %lld", &c, &g_val, &k);
        
        ll final_res = count_arr[k][g_val] - count_arr[k][c - 1];
        printf("%lld\n", final_res);
    }
    
    return 0;
}