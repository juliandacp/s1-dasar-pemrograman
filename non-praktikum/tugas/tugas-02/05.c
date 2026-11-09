#include<stdio.h>
#define ll long long

int main(){
    char character;
    scanf("%c", &character);
    
    if(character == 'R' || character == 'r') printf("Berhenti\n");
    else if(character == 'Y' || character == 'y') printf("Hati-hati\n");
    else if(character == 'G' || character == 'g') printf("Jalan\n");
    
    return 0;
}