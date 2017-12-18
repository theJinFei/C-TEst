#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Node
{
    string number;
    int grade;
    Node(){
        number="";
        grade=0;
    }
};
bool cmp(Node a,Node b)
{
    if(a.grade==b.grade){
        return a.number<b.number;
    }
    return a.grade>=b.grade;
}
int main()
{
    int n;
    while(scanf("%d",&n) && n){
        int M,G;
        cin>>M>>G;
        vector<int> v1;
        vector<Node> v2;
        int cnt = 0;
        for(int i=0;i<M;i++){
            //cin>>v1[i]; //v1´æ´¢·ÖÊý
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            int t,sum=0;
            cin>>t;
            Node node;
            for(int j=0;j<t;j++){
                int temp;
                cin>>temp;
                sum += v1[temp-1];
            }
            if( sum >= G){
                cnt++;
                node.number = str;
                node.grade = sum;
                v2.push_back(node);
            }
        }
        sort(v2.begin(),v2.end(),cmp);
        cout<<cnt<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i].number<<" "<<v2[i].grade<<endl;
        }
        //cout<<endl;
    }
    return 0;
}
