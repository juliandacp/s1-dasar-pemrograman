#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long

typedef struct{
    ll x;
    ll y;
    ll dist;
} Node;

typedef struct{
    Node data[10005];
    ll front;
    ll rear;
} Queue;

void init_Queue(Queue *q){
    q->front = 0;
    q->rear = 0;
}

ll is_empty(Queue q){
    return q.front == q.rear;
}

void enQueue(Queue *q, Node n_Node){
    q->data[q->rear] = n_Node;
    q->rear = q->rear + 1;
}

Node deQueue(Queue *q){
    Node n_Node = q->data[q->front];
    q->front = q->front + 1;
    return n_Node;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    ll maze[n + 5][n + 5];
    ll visited[n + 5][n + 5];
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) visited[i][j] = 0;
    }
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) scanf("%lld", &maze[i][j]);
    }
    
    ll dx[4] = {-1, 0, 1, 0};
    ll dy[4] = {0, 1, 0, -1};
    
    Queue q;
    init_Queue(&q);
    
    Node start;
    start.x = 0;
    start.y = 0;
    start.dist = 0;
    
    enQueue(&q, start);
    visited[0][0] = 1;
    
    ll min_distance = -1;
    ll found = 0;
    
    while(!is_empty(q)){
        Node current = deQueue(&q);
        if(current.x == n - 1 && current.y == n - 1){
            min_distance = current.dist;
            found = 1;
            break;
        }
        for(ll i = 0; i < 4; i++){
            ll new_x = current.x + dx[i];
            ll new_y = current.y + dy[i];
            if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < n){
                if(maze[new_x][new_y] == 1 && visited[new_x][new_y] == 0){
                    visited[new_x][new_y] = 1;
                    Node next;
                    next.x = new_x;
                    next.y = new_y;
                    next.dist = current.dist + 1;
                    enQueue(&q, next);
                }
            }
        }
    }
    
    if(found == 1) printf("%lld menit doang\n", min_distance);
    else printf("Dahlah gajadi balik\n");
    
    return 0;
}