#include <iostream>
#include <stdio.h>
#define MAX 10000
using namespace std;
typedef char VertexType;
typedef int EdgeType;
typedef struct EdgeNode //边表
{
    int adjvex;
    EdgeType weight;
    struct EdgeNode *next;
}EdgeNode;

typedef struct VertexNode //顶点表
{
    VertexType data;
    EdgeNode *firstedge;
}VertexNode, AdjList[MAX];

typedef struct
{
    int numVertexs, numEdges;
    AdjList adjList; //每一个顶点的链表
}GraphAdjList;

void CreateALGragh(GraphAdjList *G){
    int i, j, k;
    EdgeNode *e;
    printf("输入顶点数和边数:\n");
    scanf("%d,%d", &G -> numVertexs, &G -> numEdges);
    for(i = 0; i < G -> numVertexs; i++){
        scanf(&G -> adjList[i].data);
        G -> adjList[i].firstedge = NULL;
    }
    for(k = 0; k < G -> numVertexs; k++){
        printf("输入边（vi,vj）上的顶点序号：\n");
        scanf("%d,%d", &i, &j);
        e = (EdgeNode *) malloc(sizeof(EdgeNode));
        e -> adjvex = j;
        e -> next = G -> adjList[i].firstedge;
        G -> adjList[i].firstedge = e;

        e = (EdgeNode *) malloc(sizeof(EdgeNode));

        e -> adjvex = i;
        e -> next = G -> adjList[j].firstedge;
        G -> adjList[j].firstedge = e;
    }

}


void DFS(GraphAdjList GL, int i)
{
    visit[i] = true;
    EdgeNode *p = GL -> adjList[i].firstedge;
    while(p){
        if(!visit[p -> adjvex]){
            visit(GL, p -> adjvex);
        }
        p = p -> next;
    }
}
void DFS_traverse(GraphAdjList GL)
{
    for(int i = 0; i < GL -> numVertexs; i++){
        visit[i] = false;
    }
    for(int i = 0; i < GL -> numVertexs; i++){
        if(!visit[i]){
            DFS(GL, i);
        }
    }
}

void BFS()
{
    for(int i = 0; i < GL -> numVertexs; i++){
        visit[i] = false;
    }
    queue<int> q1;
    for(int i = 0; i < GL -> numVertexs; i++){
        if(!visit[i]){
            visit[i] = true;
            q1.push(i);

            while(!q1.empty()){

                q1.front();
                q1.pop();
                EdgeNode *p = GL -> adjList[i].firstedge;
                while(p){
                    if(!visit[p -> adjvex]){
                        visit[p -> adjvex] = true;
                        q1.push(p -> adjvex);
                    }
                    p = p -> next;
                }

            }
        }
    }
}

int main()
{

    return 0;
}
