#include<stdio.h>
#define ll long long

int main(){
    unsigned ll e, s, test;
    scanf("%llu %llu", &e, &s);

    test = e & s;

    if(test == 0) printf("hop on roblox!");
    else printf("we'll try again tomorrow :(");

    return 0;
}