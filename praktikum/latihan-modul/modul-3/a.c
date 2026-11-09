#include<stdio.h>
#define ll long long

ll count_ways(ll hp){
    if(hp == 0) return 1;
    if(hp < 0) return 0;
    return count_ways(hp - 20) + count_ways(hp - 50) + count_ways(hp - 100);
}

int main(){
    ll t;
    scanf("%lld", &t);
    for(ll i = 0; i < t; i++){
        char enemy_name[50];
        ll hp;
        scanf("%*c");
        scanf("%[^\n]s", enemy_name);
        scanf("%lld", &hp);
        char s[10];
        scanf("%s", s);
        
        ll sum = count_ways(hp);
        if(sum > 0) printf("%s DAPAT DIKALAHKAN DENGAN %lld CARA YANG BERBEDA!\n", enemy_name, sum);
        else printf("KAVA JANGAN TERLALU KERAS MELAWAN %s\n", enemy_name);
    }
    
    return 0;
}