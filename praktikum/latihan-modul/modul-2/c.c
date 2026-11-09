#include<stdio.h>
#define ll long long

int main(){
    ll t, n;
    scanf("%lld", &t);
    
    ll total_books = 0;
    ll prime_books = 0;
    
    for(ll i = 0; i < t; i++){
        scanf("%lld", &n);
        total_books += n;
        for(ll j = 0; j < n; j++){
            ll a;
            scanf("%lld", &a);
            
            ll is_prime = 1;
            if(a < 2) is_prime = 0;
            else{
                for(ll k = 2; k * k <= a; k++){
                    if(a % k == 0){
                        is_prime = 0;
                        break;
                    }
                }
            }
            if(is_prime) prime_books++;
        }
    }
    
    if(prime_books == total_books) printf("Cici senang, bot Mr. Biti berhasil ngirim semua buku\n");
    else if(prime_books == 0) printf("Cici sedih, bot Mr. Biti gak ngirim apa apa\n");
    else printf("Cici kecewa, bot Mr. Biti cuman kirim %lld dari %lld buku\n", prime_books, total_books);
    
    return 0;
}