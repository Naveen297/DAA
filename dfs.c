// Depth first search DFS algorithm

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int adj[MAX][MAX];
int visited[MAX];
int n;

void DFS(int i)
{
    int j;
    printf("%d ", i);
    visited[i] = 1;
    for (j = 0; j < n; j++)
    {
        if (!visited[j] && adj[i][j] == 1)
            DFS(j);
    }
}

int main()
{
    int i, j;
    printf("Enter number of vertices:");
    scanf("%d", &n);
    printf("Enter adjecency matrix of the graph:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    for (i = 0; i < n; i++)
        visited[i] = 0;
    DFS(0);
    return 0;
}