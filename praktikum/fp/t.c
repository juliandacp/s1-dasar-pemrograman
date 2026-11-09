#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

ll is_prime(ll x){
    if(x < 2) return 0;
    if(x == 2) return 1;
    if(x % 2 == 0) return 0;
    for(ll i = 3; i * i <= x; i += 2){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
    ll n, r;
    char x_char;
    scanf("%lld %lld", &n, &r);
    scanf(" %c", &x_char);
    
    char code[105];
    for(ll i = 1; i <= n; i++){
        if(i == r) code[i] = x_char;
        else{
            if(x_char == 'A') code[i] = 'C';
            else if(x_char == 'B') code[i] = 'A';
            else code[i] = 'B';
        }
    }
    
    if(n % 2 == 1){
        for(ll i = 2; i <= n; i += 2){
            if(i != r) code[i] = x_char;
        }
    }
    
    if(is_prime(r)){
        for(ll i = 1; i <= n; i++){
            if(i != r && is_prime(i)){
                if(code[i] == 'A') code[i] = 'B';
                else if(code[i] == 'B') code[i] = 'C';
                else code[i] = 'A';
            }
        }
    }
    
    ll count = 0;
    for(ll i = 1; i <= n; i++){
        if(i != r && code[i] == x_char) count++;
    }
    
    printf("%lld\n", count);
    
    return 0;
}