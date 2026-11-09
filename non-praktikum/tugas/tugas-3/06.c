#include<stdio.h>
#define ll long long

int main(){
    ll n, div = 0, total = 0;
    scanf("%lld", &n);
    
    while(n != -999){
        div += 1;
        total += n;
        scanf("%lld", &n);
    }
    
    double res = (double)total / div;
    
    printf("%.2lf\n", res);
    
    return 0;
}