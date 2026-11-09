#include<stdio.h>
#define ll long long

int main(){
    ll score;
    scanf("%lld", &score);
    
    if(score >= 90) printf("Luar Biasa\n");
    else if(score >= 70) printf("Bagus\n");
    else if(score >= 50) printf("Cukup\n");
    else printf("Kurang\n");
    
    return 0;
}