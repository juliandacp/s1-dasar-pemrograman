#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char s[105];
    scanf("%[^\n]s", s);
    
    s[0] = toupper(s[0]);
    for(ll i = 1; i < strlen(s); i++){
        if(s[i - 1] == ' ' && s[i] != ' ') s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    
    printf("%s", s);
    
    return 0;
}