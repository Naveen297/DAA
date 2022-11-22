// Breath first search BFS algorithm

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int adj[MAX][MAX]; // adjacency matrix
int visited[MAX];  // visited array
int n;             // number of vertices

void BFS(int i)
{
    int j;                          // counter
    int queue[MAX], f = -1, r = -1; // queue
    printf("%d ", i);
    visited[i] = 1; // mark as visited
    queue[++r] = i; // insert into queue
    while (f != r)  // while queue is not empty
    {
        i = queue[++f]; // remove from queue
        for (j = 0; j < n; j++)
        {
            if (!visited[j] && adj[i][j] == 1) // if not visited and adjacent

            {
                printf("%d ", j);
                visited[j] = 1; // mark as visited
                queue[++r] = j; // insert into queue
            }
        }
    }
}

int main()
{
    int i, j;
    printf("\n\n\tNaveen Malhotra (209303050)\n\n");
    printf("Enter number of vertices:");
    scanf("%d", &n);
    printf("Enter adjecency matrix of the graph:");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    for (i = 0; i < n; i++)
        visited[i] = 0;
    BFS(0);
    return 0;
}
