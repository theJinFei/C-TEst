#include <iostream>
#include <queue>
using namespace std;

bool first = true;
//�������������
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
//�������Ĺ��� ����ǰ�򣨸����ң�����������ѣ�
//�������ҵ������ Ȼ��ֳ�������������
Node* build_tree(int pre[],int in[],int length)
{
    if(length ==0){
        return NULL;
    }
    Node *temp = new Node;
    int pos;  //�������������е�λ��
    for(pos = 0;pos < length; pos++){
        if(in[pos]==pre[0]) break;
    }
    temp->data  = pre[0];  //�洢���
    temp->lchild = build_tree(pre+1,in,pos);  //�ݹ齨������  ȡ��������ĺ�һ�������Ϊ�� ����Ϊpos
    temp->rchild = build_tree(pre+pos+1,in+pos+1,length-pos-1); //�ݹ齨������  ���ݸ��������е�λ�� ǰ�� pre+pos+1��ʼ Ȼ�� ����������������鼴Ϊin+pos+1 ����Ҳ�ı�

    return temp;
}
void dfs(Node* tree)  //���������Ƚ��ȳ������� ��α���
{
    queue<Node*> Q;
    Q.push(tree);

    Node* root;
    while(!Q.empty()){
        root = Q.front();   //�����в�Ϊ�յ�ʱ�� ȡ���еĵ�һ�� ��Ϊ��ǰ�ĸ��ڵ�
        Q.pop();
        if(!first){  //firstΪ���Ƹ�ʽ���
            cout<<" "<<root->data;  //����
        }
        else {
            cout<<root->data;
            first = false;
        }
        if(root->rchild!=NULL){   //������ĿҪ���Ƿ�ת������ �����ʸ����� ��������������� Ӧ������������� Ȼ���ѽ����ӡ���
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
