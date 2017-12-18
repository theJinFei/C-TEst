#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
vector<int> post, in, level(100000, -1);
void pre(int root,int begin,int end,int index)
{
    if(begin>end) return ;
    int i=0;
    while(i<end&&in[i]!=post[root])
        i++;
    //cout<<in[i];
    level[index] = in[i];
    pre(root-(end-i+1),begin,i-1,2*index+1);
    pre(root-1,i+1,end,2*index+2);
}
int main()
{
    int N,cnt = 0;;
    cin>>N;
    post.resize(N);
    in.resize(N);
    for(int i=0;i<N;i++){
        cin>>post[i];
    }
    for(int i=0;i<N;i++){
        cin>>in[i];
    }
    pre(N-1,0,N-1,0);
    for(int i=0;i<level.size();i++){
        if(level[i] != -1 && cnt != N - 1) {
            printf("%d ", level[i]);
            cnt++;
        } else if(level[i] != -1){
            printf("%d", level[i]);
            break;
        }
    }
    return 0;
}
