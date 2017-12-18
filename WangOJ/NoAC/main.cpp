#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Node
{
    int begin;
    int end;
    bool operator < (const Node e) const{
        return end < e.end;
    }
}node[100];
int main()
{
    int n;
    freopen("in.txt","r",stdin);
    while(scanf("%d", &n) != EOF){
        if(n == 0 ) break;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &node[i].begin, &node[i].end);
        }
        sort(node, node + n);
        int ans = 1;
        Node temp = node[0];
        for(int i = 1; i < n; i++){
            if(temp.end <= node[i].begin){
                ans ++;
                temp = node[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
