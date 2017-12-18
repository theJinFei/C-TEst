#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node* lchlid;
    Node* rchild;
};
Node* build_tree(int back[],int in[],int length)
{
    if(length==0){
        return NULL;
    }
    Node* temp = new Node;;
    int pos = 0;
    while(in[pos]!= back[length-1]){
        pos++;
    }

    temp->data = in[pos]; ////建树的具体代码
    temp->lchlid = build_tree(back,in,pos);
    temp->rchild = build_tree(back+pos,in+pos+1,length-pos-1);
    return temp;
}
bool first = true;
void dfs(Node* root)   //层次遍历
{
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* temp = Q.front();
        if(first){
            cout<<temp->data;
            first = false;
        }
        else {
            cout<<" "<<temp->data;

        }
        Q.pop();
        if(temp->lchlid){
            Q.push(temp->lchlid);
        }
        if(temp->rchild){
            Q.push(temp->rchild);
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int back[n],in[n];
    for(int i=0;i<n;i++){
        cin>>back[i];
    }
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    Node* root = build_tree(back,in,n);
    dfs(root);
    return 0;
}
