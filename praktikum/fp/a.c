#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll d, m, n;
        scanf("%lld %lld %lld", &d, &m, &n);
        
        if(d < 0){ printf("NO\n"); continue; }
        if(d == 0){ printf("YES\n"); continue; }
        
        double akar4 = sqrt(sqrt((double)d));
        ll res = (ll)(akar4 + 0.5);
        ll found = 0;
        ll cek = -1;
        
        for(ll bil = res - 1; bil <= res + 1; bil++){
            if(bil < 0) continue;
            ll bil2 = bil * bil;
            ll bil4 = bil2 * bil2;
            if(bil4 == d){
                cek = bil;
                found = 1;
                break;
            }
        }
        
        if(!found){ printf("NO\n"); continue; }
        if(cek <= n - m) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}