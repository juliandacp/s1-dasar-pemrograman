#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

ll max_bangau(ll k, ll t_min){
    ll low = 0, high = 1000000;
    while(low <= high){
        ll mid = low + (high - low) / 2;
        ll time = k * mid * (mid + 1) / 2;
        if(time <= t_min) low = mid + 1;
        else high = mid - 1;
    }
    return high;
}

ll can_complete(ll n, ll m, ll skill[], ll t_min){
    ll total_bangau = 0;
    for(ll i = 0; i < m; i++){
        total_bangau += max_bangau(skill[i], t_min);
        if(total_bangau >= n) return 1;
    }
    return total_bangau >= n;
}

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        ll m;
        scanf("%lld", &m);
        ll skill[m];
        for(ll i = 0; i < m; i++){
            scanf("%lld", &skill[i]);
        }
        
        ll left = 0, right = 1;
        while(!can_complete(n, m, skill, right)){
            right *= 2;
        }
        
        while(left < right){
            ll mid = left + (right - left) / 2;
            if(can_complete(n, m, skill, mid)) right = mid;
            else left = mid + 1;
        }
        
        printf("%lld\n", left);
    }
    
    return 0;
}