#include<stdio.h>
#include<string.h>
#define ll long long

int main(){
    char s[205];
    scanf("%[^\n]s", s);

    for(ll i = 0; i < strlen(s); i++){
        char c = s[i];
        
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') printf("*");
        else if(c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') printf("*");
        else if(c == ' ') printf(" ");
        else if((c != 'a' || c != 'i' || c != 'u' || c != 'e' || c != 'o') && (i % 2 == 0)) printf("#");
        else if((c != 'A' || c != 'I' || c != 'U' || c != 'E' || c != 'O') && (i % 2 == 0)) printf("#");
        else printf("%c", c);
    }

    return 0;
}