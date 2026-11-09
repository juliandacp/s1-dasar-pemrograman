#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char str[105];
    scanf("%s", str);
    
    ll total = 0;
    for(ll i = 0; i < strlen(str); i++) str[i] = tolower(str[i]);
    
    for(ll i = 0; i < strlen(str); i++){
        if(str[i] == 'a') total++;
        else if(str[i] == 'i') total++;
        else if(str[i] == 'u') total++;
        else if(str[i] == 'e') total++;
        else if(str[i] == 'o') total++;
    }
    
    printf("%lld\n", total);
    
    return 0;
}