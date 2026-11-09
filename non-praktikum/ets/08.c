#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    ll n;
    char word[25];
    char grid[25][25];
    scanf("%lld", &n);
    scanf("%s", word);
    
    ll word_len = strlen(word);
    
    for(ll i = 0; i < n; i++) scanf("%s", grid[i]);
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j <= n - word_len; j++){
            ll found = 1;
            for(ll k = 0; k < word_len; k++){
                if(grid[i][j + k] != word[k]){
                    found = 0;
                    break;
                }
            }
            if(found){
                printf("ADA\n");
                return 0;
            }
        }
    }
    
    for(ll i = 0; i <= n - word_len; i++){
        for(ll j = 0; j < n; j++){
            ll found = 1;
            for(ll k = 0; k < word_len; k++){
                if(grid[i + k][j] != word[k]){
                    found = 0;
                    break;
                }
            }
            if(found){
                printf("ADA\n");
                return 0;
            }
        }
    }
    
    for(ll i = 0; i <= n - word_len; i++){
        for(ll j = 0; j <= n - word_len; j++){
            ll found = 1;
            for(ll k = 0; k < word_len; k++){
                if(grid[i + k][j + k] != word[k]){
                    found = 0;
                    break;
                }
            }
            if(found){
                printf("ADA\n");
                return 0;
            }
        }
    }
    
    printf("TIDAK ADA\n");
    
    return 0;
}