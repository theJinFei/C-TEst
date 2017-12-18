#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;
int post[] = {3, 4, 2, 6, 5, 1};
int in[] = {3, 2, 4, 1, 6, 5};
void pre(int root,int begin,int end)
{
    if(begin>end) return ;
    int temp=start;
    for(int i=0;i<sizeof(in)/sizeof(int);i++){
        if(in[i]!=post[root]){
            temp++;
        }
        else {
            cout<<temp;
        }
    }
    pre(root-(end-i+1),begin,end-1);
    pre(root-1,begin+1,end);
}
int main()
{
    pre(5, 0, 5);
    return 0;
}
