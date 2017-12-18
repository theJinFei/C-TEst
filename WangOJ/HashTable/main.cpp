#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#define OFFSET 500000
using namespace std;
//const int MAX_N = 500000;
int Hash[1000001];
int main() {
    int n, m;
    freopen("in.txt", "r", stdin);
//    memset(Hash, 0, sizeof(Hash));

    while(scanf("%d %d",&n, &m) != EOF) {
        for(int i = -500000; i <= 500000; i++) {
            Hash[i + OFFSET] = 0;
        }
        if(n == 0) {
            break;
        }
        for(int i = 0; i < n; i++) {
            int temp;
//            cin >> temp;
            scanf("%d",&temp);
            Hash[temp + OFFSET]  = 1;
        }
        for(int i = 500000; i >= -500000; i--) {
            if(Hash[i + OFFSET] == 1) {
                //cout << i << " ";
                m--;
                printf("%d ",i);
            }
            if(m == 0){
                break;
            }
        }
    }
    return 0;
}
