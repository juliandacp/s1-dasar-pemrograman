#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

ll prime_list[15];
ll memo[605][605];
ll arr_temp[605];

void prima(){
    for(ll i = 0; i <= 10; i++) prime_list[i] = 1;
    prime_list[0] = 0;
    prime_list[1] = 0;
    for(ll i = 2; i * i <= 10; i++){
        if(prime_list[i]){
            for(ll j = i * i; j <= 10; j += i) prime_list[j] = 0;
        }
    }
}

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void isi_memo(ll n){
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= n; j++) memo[i][j] = -1;
    }
}

ll max_score(ll arr[], ll left, ll right){
    if(right - left == 1){
        memo[left][right] = 0;
        return 0;
    }
    if(memo[left][right] != -1) return memo[left][right];
    
    ll max_val = 0;
    for(ll i = left + 1; i <= right - 1; i++){
        ll left_val = arr[left];
        ll right_val = arr[right];
        ll current_score = 0;
        
        if(prime_list[arr[i]]) current_score = arr[i] * 2 * gcd(left_val, right_val);
        else current_score = left_val * arr[i] * right_val;
        
        ll total_score = current_score + max_score(arr, left, i) + max_score(arr, i, right);
        if(total_score > max_val) max_val = total_score;
    }
    
    memo[left][right] = max_val;
    return max_val;
}

ll find_max_score(ll arr[], ll n){
    isi_memo(n + 2);
    arr_temp[0] = 1;
    for(ll i = 1; i <= n; i++) arr_temp[i] = arr[i - 1];
    arr_temp[n + 1] = 1;
    return max_score(arr_temp, 0, n + 1);
}

int main(){
    prima();
    ll n, m;
    scanf("%lld", &n);
    
    ll a[n + 5];
    for(ll i = 0; i < n; i++) scanf("%lld", &a[i]);
    
    scanf("%lld", &m);
    ll b[m + 5];
    for(ll i = 0; i < m; i++) scanf("%lld", &b[i]);
    
    ll score_player = find_max_score(a, n);
    ll score_rival = find_max_score(b, m);
    
    if(score_player > score_rival) printf("Pop: %lld > %lld\n", score_player, score_rival);
    else if(score_player < score_rival) printf("Flop: %lld < %lld\n", score_player, score_rival);
    else printf("Draw: %lld = %lld\n", score_player, score_rival);
    
    return 0;
}