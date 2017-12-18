#include <iostream>
#include <queue>
using namespace std;

bool first = true;
//先制作出树结点
struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
    Node(){
        lchild = NULL;
        rchild = NULL;
    }
};
//创建树的过程 根据前序（根左右）和中序（左根友）
//在中序找到跟结点 然后分成左右两个子树
Node* build_tree(int pre[],int in[],int length)
{
    if(length ==0){
        return NULL;
    }
    Node *temp = new Node;
    int pos;  //根在中序数组中的位置
    for(pos = 0;pos < length; pos++){
        if(in[pos]==pre[0]) break;
    }
    temp->data  = pre[0];  //存储结点
    temp->lchild = build_tree(pre+1,in,pos);  //递归建左子树  取先序遍历的后一个结点作为根 长度为pos
    temp->rchild = build_tree(pre+pos+1,in+pos+1,length-pos-1); //递归建有子树  根据根在中序中的位置 前序即 pre+pos+1开始 然后 右子树在中序的数组即为in+pos+1 长度也改变

    return temp;
}
void dfs(Node* tree)  //借助队列先进先出的特性 层次遍历
{
    queue<Node*> Q;
    Q.push(tree);

    Node* root;
    while(!Q.empty()){
        root = Q.front();   //当队列不为空的时候 取队列的第一个 即为当前的根节点
        Q.pop();
        if(!first){  //first为控制格式输出
            cout<<" "<<root->data;  //访问
        }
        else {
            cout<<root->data;
            first = false;
        }
        if(root->rchild!=NULL){   //这里题目要求是翻转二叉树 即访问根右左 如果是正常二叉树 应该是先左结点进队 然后友结点进队。。
            Q.push(root->rchild);
        }
        if(root->lchild!=NULL){
            Q.push(root->lchild);
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int pre[n],in[n];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    Node* tree = build_tree(pre,in,n);
    dfs(tree);

    return 0;
}
