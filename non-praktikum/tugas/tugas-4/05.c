#include<stdio.h>
#define ll long long

int main(){
    ll m, n;
    scanf("%lld %lld", &m, &n);
    
    ll matrix[m + 1][n + 1];
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &matrix[i][j]);
        }
    }
    
    ll has_identical_rows = 0;
    for(ll i = 0; i < m; i++){
        for(ll j = i + 1; j < m; j++){
            ll is_identical = 1;
            for(ll k = 0; k < n; k++){
                if(matrix[i][k] != matrix[j][k]){
                    is_identical = 0;
                    break;
                }
            }
            if(is_identical){
                has_identical_rows = 1;
                break;
            }
        }
        if(has_identical_rows) break;
    }
    
    if(has_identical_rows) printf("YA\n");
    else printf("TIDAK\n");
    
    return 0;
}