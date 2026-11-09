#include<stdio.h>
#define ll long long

int main(){
    ll hour;
    scanf("%lld", &hour);
    
    if(hour == 0) printf("12 AM\n");
    else if(hour == 12) printf("12 PM\n");
    else if(hour > 12){
        hour %= 12;
        printf("%lld PM\n", hour);
    } else printf("%lld AM\n", hour);
    
    return 0;
}