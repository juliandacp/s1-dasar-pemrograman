#include<stdio.h>
#include<string.h>
#define ll long long

ll n;
char board[105][105];

void laser(ll i, ll j, ll direction){
    if(i < 0 || i >= n || j < 0 || j >= n) return;

    if(board[i][j] == '/'){
        if(direction == 0) laser(i + 1, j, 3);
        else if(direction == 1) laser(i, j + 1, 2);
        else if(direction == 2) laser(i - 1, j, 1);
        else if(direction == 3) laser(i, j - 1, 0);
    }
    else if(board[i][j] == '\\'){
        if(direction == 0) laser(i - 1, j, 1);
        else if(direction == 1) laser(i, j - 1, 0);
        else if(direction == 2) laser(i + 1, j, 3);
        else if(direction == 3) laser(i, j + 1, 2);
    }
    else if(board[i][j] == '.'){
        if(direction == 0){
            board[i][j] = '-';
            laser(i, j - 1, direction);
        }
        else if(direction == 1){
            board[i][j] = '|';
            laser(i - 1, j, direction);
        }
        else if(direction == 2){
            board[i][j] = '-';
            laser(i, j + 1, direction);
        }
        else if(direction == 3){
            board[i][j] = '|';
            laser(i + 1, j, direction);
        }
    }
    else if(board[i][j] == '|'){
        if(direction == 0){
            board[i][j] = '+';
            laser(i, j - 1, direction);
        }
        else if(direction == 1) laser(i - 1, j, direction);
        else if(direction == 2){
            board[i][j] = '+';
            laser(i, j + 1, direction);
        }
        else if(direction == 3) laser(i + 1, j, direction);
    }
    else if(board[i][j] == '-'){
        if(direction == 0) laser(i, j - 1, direction);
        else if(direction == 1){
            board[i][j] = '+';
            laser(i - 1, j, direction);
        }
        else if(direction == 2) laser(i, j + 1, direction);
        else if(direction == 3){
            board[i][j] = '+';
            laser(i + 1, j, direction);
        }
    }
    else if(board[i][j] == '+'){
        if(direction == 0) laser(i, j - 1, direction);
        else if(direction == 1) laser(i - 1, j, direction);
        else if(direction == 2) laser(i, j + 1, direction);
        else if(direction == 3) laser(i + 1, j, direction);
    }
}

int main(){
    scanf("%lld", &n);

    for(ll i = 0; i < n; i++) scanf("%s", board[i]);

    char a[10];
    ll x;
    scanf("%s %lld", a, &x);

    if(!strcmp(a, "atas")) laser(0, x, 3);
    else if(!strcmp(a, "bawah")) laser(n - 1, x, 1);
    else if(!strcmp(a, "kiri")) laser(x, 0, 2);
    else if(!strcmp(a, "kanan")) laser(x, n - 1, 0);

    for(ll i = 0; i < n; i++) printf("%s\n", board[i]);

    return 0;
}