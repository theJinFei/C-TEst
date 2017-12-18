//#include <iostream>
//#include <cmath>
//#include <stdio.h>
//#include <vector>
//#include <limits.h>
//#include <stack>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    char str[2000] = {' '};
//    while(gets(str)){
//        stack<char> c;
//        for(int i = 0; i < sizeof(str); i++){
//            c.push(str[i]);
//        }
//        while(!c.empty()){
//            cout << c.top();
//            c.pop();
//        }
//        cout << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <limits.h>
#include <stack>
#include <map>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int k;
    while(scanf("%d",&k)!=EOF) {
        int x[10010] = {0};
        int y[10010] = {0};
        memset(x, 0, sizeof(x));
        memset(y, 0, sizeof(y));
        int index = 0;
        for(int i = k + 1; i <= 2 * k; i++){
            int t = i * k / (i - k);
            if(t * i == (t + i) * k){
                x[index] = t;
                y[index] = i;
                index++;
            }
        }
        for(int i = 0; i < index; i++){
            printf("1/%d = 1/%d + 1/%d\n", k, x[i], y[i]);
        }
    }
    return 0;
}
