///ջ��ʹ��
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
//    while(scanf("%s", str) != EOF){ //�����ұ����ַ���
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


/////���ȶ��е�Ӧ��
//#include <queue>
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//priority_queue<int ,vector<int> , greater<int> > Q; //����һ��С����
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
//            Q.pop(); //ȡ������������СԪ�أ�����Ϊͬһ�������Ҷ��ӣ��Ҹ�˫�׽ڵ��ȨֵΪ���ǵĺ�
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
//int loc; //��̬�������Ѿ�����Ľ�����
//Node *creat() //����һ��ϵ�G���ռ䣬������ָ�����ָ��
//{
//    Tree[loc].lchild = Tree[loc].rchild = NULL; //��ʼ�����Ҷ���Ϊ��
//    return &Tree[loc++]; //����ָ�룬��loc�ۼ�
//}
//char str1[30], str2[30]; //����ǰ��������������ַ���
//void postOrder(Node *T) //�������
//{
//    if(T->lchild != NULL){
//        postOrder(T->lchild);
//    }
//    if(T->rchild != NULL){
//        postOrder(T->rchild);
//    }
//    printf("%c",T->data);
//}
//void inOrder(Node *T) //�������
//{
//    if(T->lchild != NULL){
//        inOrder(T->lchild);
//    }
//    printf("%c",T->data);
//    if(T->rchild != NULL){
//        inOrder(T->rchild);
//    }
//}
//void preOrder(Node *T) //ǰ�����
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
//        T = creat(); //�������
//        T->data = x;
//        return T;
//    }else if(x < T->data){
//        T->lchild = insert(T->lchild, x); //���뵽��������
//    }else {
//        T->rchild = insert(T->rchild, x); //���뵽��������
//    }
//}
////���ַ�����ǰ����������������ԭ���������������㣬
////����ǰ��������Ϊstr1[s1]---str2[e1]
////����������Ϊstr2[s2]---str2[e2]
//Node *build(int s1, int e1, int s2, int e2)
//{
//    Node* ret = creat(); //Ϊ�������������ռ�
//    ret->data = str1[s1];
//    int rootIdx;
//    for(int i = s2; i <= e2; i++){
//        if(str2[i] == str1[s1]){
//            rootIdx = i;
//            break;
//        }
//    }
//    if(rootIdx != s2){ //����������Ϊ��
//        ret->lchild = build(s1 + 1, s1 + (rootIdx - s2), s2, rootIdx - 1);//�ݹ黹ԭ��������
//    }
//    if(rootIdx != e2){ //����������Ϊ��
//        ret->rchild  = build(s1 + (rootIdx - s2) + 1, e1, rootIdx + 1, e2);//�ݹ黹ԭ��������
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
//    while(~scanf("%s%s", a, b)){ //�����ַ���������������룬��Ϊ�ַ����������ڴ���
//        int ans = 0;
//        for(int i = 0; a[i] != 0; i++){ //����a��ÿһ���ַ���ֱ��a�ַ�����β
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
typedef long long ll; //��֤��ֵ�������
/////////////////////////////////////////
//ɸ������
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








