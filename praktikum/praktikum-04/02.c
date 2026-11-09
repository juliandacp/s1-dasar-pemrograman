#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

typedef struct{
    char name[50];
    ll priority;
}task;

int main(){
    task *task_ptr = NULL;
    ll index = 0;

    while(1){
        char cmd[20];
        scanf("%s", cmd);

        if(!strcmp(cmd, "EXIT")) break;
        else if(!strcmp(cmd, "ADD")){
            task_ptr = (task*)realloc(task_ptr, (index + 1) * sizeof(task));
            scanf(" %s %lld", task_ptr[index].name, &task_ptr[index].priority);
            printf("%s %lld is added\n", task_ptr[index].name, task_ptr[index].priority);
            index++;
        }else if(!strcmp(cmd, "CHECK")){
            ll id;
            scanf(" %lld", &id);

            if(id < 0 || id >= index) printf("Task at ID %lld is empty\n", id);
            else if(strcmp(task_ptr[id].name, "[deleted]") == 0) printf("Task at ID %lld is empty\n", id);
            else printf("%s %lld\n", task_ptr[id].name, task_ptr[id].priority);
        }else if(!strcmp(cmd, "LIST")){
            printf("TO DO LIST:\n");

            for(ll i = 0; i < index; i++) if(strcmp(task_ptr[i].name, "[deleted]") != 0) printf("%s %lld\n", task_ptr[i].name, task_ptr[i].priority);
        }else if(!strcmp(cmd, "CLEAR")){
            ll id;
            scanf(" %lld", &id);

            if(id >= 0 && id < index){
                if(strcmp(task_ptr[id].name, "[deleted]") == 0) printf("Task [deleted] is cleared\n");
                else{
                    printf("Task %s is cleared\n", task_ptr[id].name);
                    strcpy(task_ptr[id].name, "[deleted]");
                }
            }
        }
    }

    free(task_ptr);

    return 0;
}