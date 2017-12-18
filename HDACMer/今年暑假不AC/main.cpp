#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Node
{
    int begin;
    int end;
};
bool cmp(Node a,Node b)
{
    return a.end<b.end;
}
int main()
{
    int n;
    while(cin>>n && n){
        Node node[n];
        for(int i=0;i<n;i++){
            cin>>node[i].begin>>node[i].end;
        }
        sort(node,node+n,cmp);
        int s = node[0].begin, e = node[0].end ,cnt = 1;
        for(int i=1;i<n;i++){
            if(node[i].begin >= e ){
                cnt++;
                e = node[i].end;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
