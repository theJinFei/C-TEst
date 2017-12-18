#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Node
{
    string number;
    int begin;
    int end;
};
bool cmp1(Node a,Node b)
{
    return a.begin<b.begin;
}
bool cmp2(Node a,Node b)
{
    return a.end>b.end;
}
int main()
{
    int N;
    cin>>N;
    while(N--){
        int M;
        cin>>M;
        Node node[M];
        vector<string> s1;
        for(int i=0;i<M;i++){
            string temp;
            cin>>temp;
            int temp1,temp2;
            int a,b,c,d,e,f;
            scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f);
            temp1 = a*3600+b*60+ c;
            temp2 = d*3600+e*60+ f;
            node[i].begin = temp1;
            node[i].end = temp2;
            node[i].number = temp;
        }
        sort(node,node+M,cmp1);
        s1.push_back(node[0].number);
        sort(node,node+M,cmp2);
        s1.push_back(" " + node[0].number);
        for(int i=0;i<s1.size();i++){
            cout<<s1[i];
        }
        cout<<endl;
    }
    return 0;
}
