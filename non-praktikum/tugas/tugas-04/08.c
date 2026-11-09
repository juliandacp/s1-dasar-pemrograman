#include<stdio.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll matrix[n + 5][n + 5];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &matrix[i][j]);
        }
    }
    
    ll top = 0, bottom = n - 1;
    ll left = 0, right = n - 1;
    
    while(top <= bottom && left <= right){
        for(ll j = left; j <= right; j++) printf("%lld ", matrix[top][j]);
        top++;
        
        for(ll i = top; i <= bottom; i++) printf("%lld ", matrix[i][right]);
        right--;
        
        if(top <= bottom){
            for(ll j = right; j >= left; j--) printf("%lld ", matrix[bottom][j]);
            bottom--;
        }
        
        if(left <= right){
            for(ll i = bottom; i >= top; i--) printf("%lld ", matrix[i][left]);
            left++;
        }
    }
    
    printf("\n");
    
    return 0;
}