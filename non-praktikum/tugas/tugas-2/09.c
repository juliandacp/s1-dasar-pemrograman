#include<stdio.h>
#define ll long long

int main(){
    ll age;
    scanf("%lld", &age);
    
    if(age > 60) printf("Pensiunan\n");
    else if(age >= 19) printf("Pekerja\n");
    else if(age >= 6) printf("Pelajar\n");
    else printf("Balita\n");
    
    return 0;
}