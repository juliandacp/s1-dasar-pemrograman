#include<stdio.h>
#define ll long long

struct Player{
    ll hp;
    ll atk;
};

int main(){
    struct Player data_player_1, data_player_2;
    scanf("%lld %lld", &data_player_1.hp, &data_player_1.atk);
    scanf("%lld %lld", &data_player_2.hp, &data_player_2.atk);
    while(1){
        data_player_2.hp -= data_player_1.atk;
        if(data_player_2.hp <= 0){
            printf("player 1 menang dengan sisa nyawa = %lld. GGWP!\n", data_player_1.hp);
            break;
        }
        data_player_1.hp -= data_player_2.atk;
        if(data_player_1.hp <= 0){
            printf("player 2 menang dengan sisa nyawa = %lld. Jago banget!\n", data_player_2.hp);
            break;
        }
    }
    
    return 0;
}