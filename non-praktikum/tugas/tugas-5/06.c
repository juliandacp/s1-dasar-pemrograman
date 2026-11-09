#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char s[105];
    scanf("%[^\n]s", s);
    
    ll count[27] = {0};
    for(ll i = 0; i < strlen(s); i++){
        char c = tolower(s[i]);
        if(c >= 'a' && c <= 'z') count[c - 'a']++;
    }
    
    for(ll i = 0; i < 26; i++){
        char letter = 'a' + i;
        if(count[i] > 0) printf("%c: %lld\n", letter, count[i]);
    }
    
    return 0;
}