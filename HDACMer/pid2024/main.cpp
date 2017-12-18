#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include <set>
#include<algorithm>
#include <limits.h>
#include <ctype.h>
#include <map>
#include <stack>
#include <vector>
#include <sstream>
#include <string.h>
typedef long long LL;
using namespace std;
const int N = 101;
int data[N][N];
#define PI 3.1415926
typedef __int64 LL;
1个格子的时候   3种
2个格子的时候   6种
3个格子的时候   6种
4个格子的时候：
分两种情况：
（1）前面三种都排好
R
P
G
第四个格子的时候只有一种可能：P

（2）前面两个排好
R
P
R
第四个格子的时候只有两种种可能：P、G

也就是说：
如果有n个方格，当对第n个方格填色时，有两种情况：

１）应该已经对前面n-1个方格填好了色，有f(n-1)种情况，此时第n-1个跟第一个颜色一定不一样，所以第n个只有一种选择。
２）对前面n-2个方格填好色，有f(n-2)种情况，第n-1个空格颜色跟第一个颜色一样（否则就成了上面那种情况了），只有一种可能，最后第n个方格可以填两种颜色（因为n-１和１是第同种颜色），所以是　２*f(n-2);

                   可以推出f(n)=f(n-1)+2(n-2),n>=4;

所以有：

f(n)=f(n-1)+2*f(n-2)
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //memset(data, 1, sizeof(data)); //初始化为1 为没预定的状态

    int n;
    while(scanf("%d", &n) != EOF){
        LL temp = 3 * pow(2, (n - 1));
        cout << temp << endl;
    }


    return 0;
}




