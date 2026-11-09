#include<stdio.h>
#define ll long long

ll deret_j(ll N, ll i, ll j){
    if(N == 0) return i;
    if(N == 1) return j;
    return deret_j(N - 1, i, j) + deret_j(N - 2, i, j);
}

ll deret_r(ll N, ll i, ll j, ll k){
    if(N == 0) return i;
    if(N == 1) return j;
    return deret_r(N - 1, i, j, k) + deret_r(N - 2, i, j, k) - k;
}

int main(){
    ll N, i, j, k, result = 0;
    scanf("%lld %lld %lld %lld", &N, &i, &j, &k);

    ll res1 = deret_j(N, i, j);
    ll res2 = deret_r(N, i, j, k);

    if(res1 > res2) result = res1 - res2;
    else result = res2 - res1;

    printf("%lld\n", result);

    return 0;
}