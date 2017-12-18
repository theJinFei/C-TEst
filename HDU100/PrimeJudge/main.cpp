#include <iostream>
#include <cmath>
#include <stdio.h>
#define MAX_N 10001
using namespace std;
int is_Prime[MAX_N];
void Prime()
{
    for(int i = 0; i < MAX_N; i++){
        is_Prime[i] = 1;
    }
    is_Prime[0] = is_Prime[1] = 0;
    for(int i = 2; i <= MAX_N; i++){
        if(is_Prime[i]){
            for(int j = 2 * i; j <= MAX_N; j += i){
                is_Prime[j] = 0;
            }
        }
    }
}
int main()
{
    Prime();
    int x, y;
    int flag = 1;
    while(cin >> x >> y){
        if(x == 0 && y == 0) break;
        int t = x * x + x + 41;
        if(t < 0){
             cout << "Sorry" <<endl;
             continue;
        }
        for(int n = x; n < y; n++){
            if(!is_Prime[n * n + n + 41]){
                flag = 0;break;
            }
        }
        if(flag){
            cout << "OK" << endl;
        }else {
            cout << "Sorry" <<endl;
        }
    }
    return 0;
}
