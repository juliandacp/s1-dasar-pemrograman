#include<stdio.h>
#define ll long long

int main(){
    ll salary;
    scanf("%lld", &salary);
    
    if(salary >= 10000000) printf("Kaya\n");
    else if(salary >= 3000000) printf("Menengah Atas\n");
    else if(salary >= 1000000) printf("Menengah Bawah\n");
    else printf("Miskin\n");
    
    return 0;
}