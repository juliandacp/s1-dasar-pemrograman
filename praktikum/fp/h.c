#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

typedef struct contact{
    char name[100];
    char phone_number[100];
    struct contact *close_friend;
} contact;

ll phone_sum(char *phone_number){
    ll sum = 0;
    for(ll i = 0; phone_number[i] != '\0'; i++){
        if(phone_number[i] >= '0' && phone_number[i] <= '9') sum += phone_number[i] - '0';
    }
    return sum;
}

contact *contact_name(contact *contacts, ll n, char *name){
    for(ll i = 0; i < n; i++){
        if(strcmp(contacts[i].name, name) == 0) return &contacts[i];
    }
    return NULL;
}

ll friend_phone(contact *c){
    if(c == NULL || c->close_friend == NULL) return -1;
    return phone_sum(c->close_friend->phone_number);
}

void sort(contact *contacts, ll n){
    for(ll i = 0; i < n - 1; i++){
        for(ll j = 0; j < n - i - 1; j++){
            ll sum1 = phone_sum(contacts[j].phone_number);
            ll sum2 = phone_sum(contacts[j + 1].phone_number);
            ll friend_sum1 = friend_phone(&contacts[j]);
            ll friend_sum2 = friend_phone(&contacts[j + 1]);
            
            if(sum1 > sum2){
                contact temp = contacts[j];
                contacts[j] = contacts[j + 1];
                contacts[j + 1] = temp;
            }
            else if(sum1 == sum2){
                if(friend_sum1 != -1 && friend_sum2 != -1){
                    if(friend_sum1 > friend_sum2){
                        contact temp = contacts[j];
                        contacts[j] = contacts[j + 1];
                        contacts[j + 1] = temp;
                    }
                }
            }
        }
    }
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    contact *contacts = (contact *)malloc(n * sizeof(contact));
    for(ll i = 0; i < n; i++){
        scanf("%s %s", contacts[i].name, contacts[i].phone_number);
        contacts[i].close_friend = NULL;
    }
    
    ll c;
    scanf("%lld", &c);
    for(ll i = 0; i < c; i++){
        char name1[105], name2[105];
        scanf("%s %s", name1, name2);
        
        contact *contact1 = contact_name(contacts, n, name1);
        contact *contact2 = contact_name(contacts, n, name2);
        if(contact1 != NULL && contact2 != NULL){
            contact1->close_friend = contact2;
            contact2->close_friend = contact1;
        }
    }
    
    sort(contacts, n);
    for(ll i = 0; i < n; i++){
        printf("Contact #%lld\n\n", i + 1);
        printf("Name : %s\n", contacts[i].name);
        printf("Phone Number : %s\n", contacts[i].phone_number);
        printf("-------------------------\n\n");
    }
    
    free(contacts);
    return 0;
}