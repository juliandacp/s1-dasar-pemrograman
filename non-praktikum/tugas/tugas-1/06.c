#include<stdio.h>
#define ll long long

int main(){
    ll seconds, hours, minutes, seconds2;
    scanf("%lld", &seconds);
    
    hours = seconds / 3600;
    minutes = seconds % 3600 / 60;
    seconds2 = seconds % 3600 % 60;
    
    printf("%lld %lld %lld\n", hours, minutes, seconds2);
    
    return 0;
}