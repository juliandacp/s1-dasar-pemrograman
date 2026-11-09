#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char s[105];
    scanf("%s", s);
    
    for(ll i = 0; i < strlen(s) / 2; i++){
        char temp = s[i];
        s[i] = s[strlen(s) - i - 1];
        s[strlen(s) - i - 1] = temp;
    }
    
    printf("%s\n", s);
    
    return 0;
}