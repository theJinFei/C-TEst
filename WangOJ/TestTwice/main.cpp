#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <queue>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <iomanip>
using namespace std;
typedef long long LL;
#define MAX 1000001
//int a[MAX][MAX];
//int b[MAX][MAX];
//int res[MAX][MAX];

char c1[200];
char c2[200];

int a[1000001];
//这个是 有点像贪心算法？
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    LL ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1;j < n; j++){
            if(a[i] > a[j]){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}




