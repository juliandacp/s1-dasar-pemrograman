#include<stdio.h>
#define ll long long

int main(){
    ll birth_year, age;
    scanf("%lld", &birth_year);
    
    age = 2025 - birth_year;
    
    printf("%lld\n", age);
    
    return 0;
}