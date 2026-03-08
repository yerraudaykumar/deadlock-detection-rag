#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int recStack[MAX];
int n;

int dfs(int node) {
    visited[node] = 1;
    recStack[node] = 1;

    for(int i = 0; i < n; i++) {
        if(graph[node][i]) {

            if(!visited[i] && dfs(i))
                return 1;

            else if(recStack[i])
                return 1;
        }
    }

    recStack[node] = 0;
    return 0;
}

int detectDeadlock() {

    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            if(dfs(i))
                return 1;
        }
    }

    return 0;
}

int main() {

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    if(detectDeadlock())
        printf("Deadlock Detected\n");
    else
        printf("No Deadlock\n");

    return 0;
}