#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    
    char s[105];
    strcpy(s, "rlrllrllrlrrlrllrrrllrrrrrlrrlrrrlllrllrrrrrlrlllrrlrlllrlllrrlrlllrlllrrlllrllrllrrrrrrrlrlllrrlrrl");
    
    printf("%c", s[n]);
    
    return 0;
}