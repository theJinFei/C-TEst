#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
#include <cmath>
#include <map>
#include <queue>
using namespace std;

queue<int> Q[21];

int main()
{
    //队列初始化
    for(int i = 1, j = 1; i <= 20; i++){
        Q[i].push(j++);
        Q[i].push(j++);
        Q[i].push(j++);
        Q[i].push(j++);
        Q[i].push(j++);
    }
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        bool isOK = false;
        for(int row = 1; row <= 20; row++){
            if(Q[row].size() >= t){
                for(int j = 0; j < t; j++){
                    cout << Q[row].front() <<" ";
                    Q[row].pop();
                }
                isOK = true;
                break;
            }
        }
        if(!isOK){
            for(int row = 1; row <= 20 && t > 0; row ++){
                while(t > 0 && !Q[row].empty()){
                    cout << Q[row].front() << " ";
                    Q[row].pop();
                    t--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
