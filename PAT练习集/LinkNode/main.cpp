#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 100000;
struct Node
{
    int address;
    int key;
    int next;
    int num;
}node[maxn];
bool cmp(Node a,Node b)
{
    return a.num<b.num;
}
bool exist[maxn];
int main()
{
    int a,n;
    cin>>a>>n;
    int cnt1=0,cnt2 =0;
    for(int i = 0; i < maxn; i++) {
        node[i].num = 2 * maxn;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        scanf("%d%d", &node[a].key, &node[a].next);
        node[a].address = a;
    }

    for(int i=a;i!=-1;i=node[i].next){
        if(exist[abs(node[i].key)]==false){
            exist[abs(node[i].key)]=true;
            node[i].num = cnt1;
            cnt1++;
        }else {
            node[i].num = cnt2+maxn;
            cnt2++;
        }
    }
    sort(node,node+maxn,cmp);
     int cnt = cnt1 + cnt2;
    for(int i = 0; i < cnt; i++) {
        if(i != cnt1 - 1 && i != cnt - 1) {
            printf("%05d %d %05d\n", node[i].address, node[i].key, node[i+1].address);
        } else {
            printf("%05d %d -1\n", node[i].address, node[i].key);
        }
    }
    return 0;
}
