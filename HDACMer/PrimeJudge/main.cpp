#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
bool isPrime[10000];
//素数打表法
void JudgePrime()
{
    memset(isPrime, 1, sizeof(isPrime)); //先初始化为1
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2;i < sizeof(isPrime); i++){
        if(isPrime[i]){
            for(int j = 2 * i; j < sizeof(isPrime); j += i){
                isPrime[j] = 0;
            }
        }
    }
}
int main()
{
    int x, y;
    JudgePrime();
    while(cin >> x >> y){
        bool flag = 1;
        if(x == 0 && y == 0){
            break;
        }
        for(int i = x + 1; i < y; i++){
            if(!isPrime[i * i + i + 41]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "OK" <<endl;
        }else {
            cout <<"Sorry" <<endl;
        }
    }
    return 0;
}
