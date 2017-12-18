#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <queue>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
typedef long long LL;
#define MAX 1000001

int a[1001][1001];
int b[1001][1001];
int c[1001][1001];
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= n; j++) {
            if(j != 1) {
                cout << " " << b[i][j] ;
            } else {
                cout << b[i][j] ;
            }
        }
        cout << endl;
    }
    return 0;
}
