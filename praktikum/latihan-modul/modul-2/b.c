#include<stdio.h>
#define ll long long

int main(){
    ll n, x;
    scanf("%lld %lld", &n, &x);
    
    ll result = 0, total1 = 0;
    for(ll i = 0; i < n; i++){
        ll num;
        scanf("%lld", &num);
        while(num > 0){
            total1 += (num & 1);
            num >>= 1;
        }
    }
    
    result = total1 / x;
    printf("%lld %lld\n", total1, result);
    
    if(total1 % x == 0) printf("ADIL NIH, TERIMAKASIH LAPET\n");
    else printf("UNTUK MEMPERERAT TALI SILATURAHMI, BOLEHKAH SAYA PINJAM DULU SERATUS");
    
    return 0;
}