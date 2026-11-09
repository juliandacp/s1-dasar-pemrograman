#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
    ll a, b, c, x, y;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &x, &y);
    
    int bee = (a + c >= x);
    int friend_val = (b + c >= y);
    int enough = (a + b + c >= x + y);
    
    if(bee && friend_val && enough) printf("Okay, okay, okay, okay, okay, okay, gas bagiin ae Teto");
    else printf("WEH TAHAN DULU TETO, JAN DIBAGIIN DULU!");
    
    return 0;
}