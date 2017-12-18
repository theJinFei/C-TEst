#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Node
{
    int number;
    int grade;
    Node(){
        number = 0;
        grade = 0;
    }
};
int n;

bool cmp(Node a,Node b)
{
    return a.grade > b.grade;
}

int main()
{
    while (cin >> n) {
        int a,b;
        vector<Node> v1;
        int score;
        while( scanf("%d",&a) && scanf("%d",&b) ){
            if (a == 0 && b == 0) break;
            Node node;
            node.number = a;


            node.grade = b;
            if (a == n) {
                score = b;
            }
            v1.push_back(node);
        }
        sort(v1.begin(),v1.end(),cmp);
        for(int i=0;i<v1.size();i++){
            if(v1[i].grade==score){
                cout<<i+1;break;
            }
        }
        cout<<endl;
    }


    return 0;
}
