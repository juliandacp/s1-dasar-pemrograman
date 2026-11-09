#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

int main(){
    ll t, a;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &a);
        if(a % 6 == 0) printf("Y\n");
        else printf("N\n");
    }
    
    return 0;
}