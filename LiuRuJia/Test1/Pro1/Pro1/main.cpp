#define LOCAL
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#define INF 10000000000
#define MIN INF
#define MAX -INF
#include <algorithm>
#include <set>
#include <stack>
#include <cmath>
#include <map>
using namespace std;
int arr[1000];
int fun(int i)
{
    if(i == 0 || i == 1){
        return i;
    }else {
        return fun(i - 1) + fun(i - 2);
    }
}
int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif // LOCAL
    int first, second, res[100];
    char ch;
    while(scanf("%d", &first) != EOF) {
        res[0] = 0;
        res[1] = first;
        int i = 1;
        while(scanf("%c", &ch) != EOF && ch != '\n'){
            scanf("%d", &second);
            if(ch == '-'){
                res[++i] = -second;
            }else if(ch == '+'){
                res[++i] = second;
            }else if(ch == '*'){
                res[i] *= second;
            }else if(ch == '/'){
                res[i] /= second;
            }
        }
        for(int j = 1; j <= i; j++){
            res[0] += res[j];
        }
        printf("%d\n", res[0]);
    }
    return 0;
}
