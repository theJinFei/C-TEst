#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
    int Number;
    int Sum;
};
bool cmp(Node a,Node b)
{
    return a.Sum<b.Sum;
}
int main()
{
    int N;
    cin>>N;
    Node a[N+1];
    for(int i=0;i<N+1;i++){
        a[i].Number=i;
        a[i].Sum = 0;
    }
    for(int i=0;i<N;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        a[temp1].Sum+=temp2;
    }
    sort(a,a+N+1,cmp);
    cout<<a[N].Number<<" "<<a[N].Sum<<endl;
    return 0;

}
