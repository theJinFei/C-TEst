#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int M,N,TOL;
    cin>>M>>N>>TOL;
    int adj[N][M]={0};
    vector<int> v1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>adj[i][j];
            v1.push_back(adj[i][j]);
        }
    }
    return 0;
}
