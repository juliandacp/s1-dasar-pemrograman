#include<stdio.h>
#define ll long long

int main(){
    ll m, n, p;
    scanf("%lld %lld %lld", &m, &n, &p);
    
    ll a[m + 1][n + 1], b[n + 1][p + 1], c[m + 1][p + 1];
    
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < p; j++){
            scanf("%lld", &b[i][j]);
        }
    }
    
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < p; j++){
            c[i][j] = 0;
        }
    }
    
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < p; j++){
            for(ll k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < p; j++){
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}