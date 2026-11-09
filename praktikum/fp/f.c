#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define MOD 1000000007

int main(){
    ll n, k, p;
    scanf("%lld %lld %lld", &n, &k, &p);
    
    ll a[n + 5], b[n + 5];
    for(ll i = 1; i <= n; i++){
        scanf("%lld %lld", &a[i], &b[i]);
    }
    
    ll dp[2][k + 5][p + 5];
    for(ll i = 0; i < 2; i++){
        for(ll c = 0; c <= k; c++){
            for(ll w = 0; w <= p; w++){
                dp[i][c][w] = 0;
            }
        }
    }
    
    dp[0][0][0] = 1;
    for(ll i = 1; i <= n; i++){
        ll now = i % 2;
        ll prev = 1 - now;
        
        for(ll c = 0; c <= k; c++){
            for(ll w = 0; w <= p; w++){
                dp[now][c][w] = dp[prev][c][w];
            }
        }
        
        for(ll j = 1; j <= a[i]; j++){
            ll cost = j * b[i];
            if(cost > p) break;
            for(ll c = j; c <= k; c++){
                for(ll w = cost; w <= p; w++){
                    dp[now][c][w] = (dp[now][c][w] + dp[prev][c - j][w - cost]) % MOD;
                }
            }
        }
    }
    
    printf("%lld\n", dp[n % 2][k][p]);
    
    return 0;
}