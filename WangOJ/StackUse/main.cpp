///栈的使用
//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//#include <string.h>
//#include <stack>
//using namespace std;
//stack<char> ss;
//char str[110];
//char ans[110];
//int main()
//{
//    freopen("in.txt","r",stdin);
//    while(scanf("%s", str) != EOF){ //从左到右遍历字符串
//        int i;
//        for(i = 0; str[i] != 0; i++){
//            if(str[i] == '('){
//                ss.push(i);
//                ans[i] = ' ';
//            }else if(str[i] == ')'){
//                if(!ss.empty()){
//                    ss.pop();
//                    ans[i] = ' ';
//                }else{
//                    ans[i] = '?';
//                }
//            }else {
//                ans[i] = ' ';
//            }
//        }
//        while(!ss.empty()){
//            ans[ss.top()] = '$';
//            ss.pop();
//        }
//        ans[i] = 0;
//        puts(str);
//        puts(ans);
//    }
//    return 0;
//}


/////优先队列的应用
//#include <queue>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//priority_queue<int ,vector<int> , greater<int> > Q; //声明一个小顶堆
//int main()
//{
//    int n;
//    freopen("in.txt","r",stdin);
//    while(~scanf("%d", &n)){
//        while(!Q.empty()) Q.pop();
//        for(int i = 1; i <= n; i++){
//            int temp;
//            scanf("%d", &temp);
//            Q.push(temp);
//        }
//        int ans = 0;
//        while(Q.size() > 1){
//            int a = Q.top();
//            Q.pop();
//            int b = Q.top();
//            Q.pop(); //取出堆中两个最小元素，他们为同一结点的左右儿子，且该双亲节点的权值为他们的和
//            ans += a + b;
//            Q.push(a + b);
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}


//#include <queue>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//struct Node
//{
//    Node *lchild;
//    Node *rchild;
//    char data;
//}Tree[50];
//int loc; //静态数组中已经分配的结点个数
//Node *creat() //申请一个系欸但空间，返回其指向其的指针
//{
//    Tree[loc].lchild = Tree[loc].rchild = NULL; //初始化左右儿子为空
//    return &Tree[loc++]; //返回指针，且loc累加
//}
//char str1[30], str2[30]; //保存前序和中序遍历结果字符串
//void postOrder(Node *T) //后序遍历
//{
//    if(T->lchild != NULL){
//        postOrder(T->lchild);
//    }
//    if(T->rchild != NULL){
//        postOrder(T->rchild);
//    }
//    printf("%c",T->data);
//}
//void inOrder(Node *T) //中序遍历
//{
//    if(T->lchild != NULL){
//        inOrder(T->lchild);
//    }
//    printf("%c",T->data);
//    if(T->rchild != NULL){
//        inOrder(T->rchild);
//    }
//}
//void preOrder(Node *T) //前序遍历
//{
//    printf("%c",T->data);
//    if(T->lchild != NULL){
//        preOrder(T->lchild);
//    }
//    if(T->rchild != NULL){
//        preOrder(T->rchild);
//    }
//}
//Node* insert(Node *T, char x)
//{
//    if(T == NULL){
//        T = creat(); //建立结点
//        T->data = x;
//        return T;
//    }else if(x < T->data){
//        T->lchild = insert(T->lchild, x); //插入到左子树上
//    }else {
//        T->rchild = insert(T->rchild, x); //插入到右子树上
//    }
//}
////由字符串的前序遍历和中序遍历还原树，并返回其根结点，
////其中前序遍历结果为str1[s1]---str2[e1]
////中序遍历结果为str2[s2]---str2[e2]
//Node *build(int s1, int e1, int s2, int e2)
//{
//    Node* ret = creat(); //为该树根结点申请空间
//    ret->data = str1[s1];
//    int rootIdx;
//    for(int i = s2; i <= e2; i++){
//        if(str2[i] == str1[s1]){
//            rootIdx = i;
//            break;
//        }
//    }
//    if(rootIdx != s2){ //若左子树不为空
//        ret->lchild = build(s1 + 1, s1 + (rootIdx - s2), s2, rootIdx - 1);//递归还原其左子树
//    }
//    if(rootIdx != e2){ //若右子树不为空
//        ret->rchild  = build(s1 + (rootIdx - s2) + 1, e1, rootIdx + 1, e2);//递归还原其右子树
//    }
//    return ret;
//}
//int main()
//{
//    while(scanf("%s", str1) != EOF){
//        scanf("%s", str2);
//        loc = 0;
//        int L1 = strlen(str1);
//        int L2 = strlen(str2);
//        Node *T = build(0, L1 - 1, 0, L2 - 1);
//        postOrder(T);
//        printf("\n");
//    }
//    return 0;
//}

//#include <queue>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//    char a[11];
//    char b[11];
//    while(~scanf("%s%s", a, b)){ //利用字符串将两个数组读入，作为字符串保存在内存中
//        int ans = 0;
//        for(int i = 0; a[i] != 0; i++){ //遍历a中每一个字符，直到a字符串结尾
//            for(int j = 0; b[j] != 0; j++){
//                ans += (a[i] - '0') * (b[j] - '0');
//            }
//        }
//        printf("%d", ans);
//    }
//}


#include <queue>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll; //保证数值不会溢出
/////////////////////////////////////////
//筛素数法
bool mark[100001];
int prime[100001];
int primeSize;
void init()
{
    primeSize = 0;
    for(int i = 2; i <= 100000; i++){
        if(mark[i]){
            continue;
        }
        prime[primeSize++] = i;
        for(int j = i * i; j <= 100000; j += i){
            mark[j] = true;
        }
    }
}
/////////////////////////////////////////
int main()
{
    int m;
    while(scanf("%d",&m) != EOF){
        if(m == 0) break;
        ll a, b;
        scanf("%lld %lld",&a, &b);
        ll t = a + b;
        int result[50],index = 0;
        do{
            result[index++] = t % m;
            t = t / m;
        }while(t != 0);
        for(int i = index - 1; i >= 0; i--){
            printf("%d",result[i]);
        }
        printf("\n");
    }
}








