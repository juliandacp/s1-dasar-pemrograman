#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char str[105];
    scanf("%s", str);
    
    ll total = 0;
    for(ll i = 0; i < strlen(str); i++) str[i] = tolower(str[i]);
    
    printf("%s\n", str);
    
    return 0;
}