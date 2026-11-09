#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

ll size = 0;

typedef struct{
    ll size;
    ll index;
    ll *array;
}Data;

void free_data(Data *data, ll size){
    if(!data) return;

    for(ll i = 0; i < size; i++) free(data[i].array);

    free(data);
}

void resize(Data *data, ll idx){
    if(data[idx].size == 0){
        data[idx].size = 2;
        data[idx].array = (ll*)malloc(data[idx].size * sizeof(ll));
    }else{
        data[idx].size *= 2;
        data[idx].array = (ll*)realloc(data[idx].array, data[idx].size * sizeof(ll));
    }
}

void insert(Data **data_ptr, ll a, ll b){
    ll max_idx = (a > b) ? a : b;

    if(max_idx >= size){
        ll old_size = size;
        ll new_size = max_idx + 1;

        Data *new_array = (Data*)realloc(*data_ptr, new_size * sizeof(Data));
        if(!new_array){
            free_data(*data_ptr, old_size);
            exit(1);
        }

        for(ll i = old_size; i < new_size; i++){
            new_array[i].size = 0;
            new_array[i].index = 0;
            new_array[i].array = NULL;
        }

        *data_ptr = new_array;
        size = new_size;
    }

    if((*data_ptr)[a].index >= (*data_ptr)[a].size) resize(*data_ptr, a);
    if((*data_ptr)[b].index >= (*data_ptr)[b].size) resize(*data_ptr, b);

    (*data_ptr)[a].array[(*data_ptr)[a].index++] = b;
    (*data_ptr)[b].array[(*data_ptr)[b].index++] = a;
}

void print(Data *data){
    for(ll i = 1; i < size; i++){
        if(data[i].index == 0) continue;

        printf("Pulau %lld: ", i);
        for(ll j = 0; j < data[i].index; j++){
            printf("%lld", data[i].array[j]);
            if(j < data[i].index - 1) printf(" ");
        }

        printf("\n");
    }
}

int main(){
    Data *data = NULL;
    ll a, b;

    while(scanf("%lld %lld", &a, &b) == 2) insert(&data, a, b);

    print(data);
    free_data(data, size);

    return 0;
}