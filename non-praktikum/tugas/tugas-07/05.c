#include<stdio.h>
#define ll long long

struct Book{
    char title[100];
    char author[100];
    ll year;
};

int main(){
    struct Book b;
    scanf("%[^\n]%*c", b.title);
    scanf("%[^\n]%*c", b.author);
    scanf("%lld", &b.year);
    
    printf("Judul: %s, Penulis: %s, Tahun Terbit: %lld\n", b.title, b.author, b.year);
    
    return 0;
}