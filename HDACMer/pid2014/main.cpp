#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <limits.h>
#include <set>
#include <map>
#include <string.h>
using namespace std;
int flag[1000000];
int money[6] = {1, 2, 5, 10, 50, 100};
int dp[100000];
int fun(int temp)
{
    //int min = INT_MAX;


    for(int i = 1; i <= temp; i++){
        for(int j = 0;j < 6; j++){
            if(i >= money[j] && dp[i - money[j]] + 1 < dp[i]){
                dp[i] = dp[i - money[j]] + 1;
            }
        }
    }
    //printf("dp[%d] = %d\n", temp ,dp[temp]);
    return dp[temp];
}


int main() {
    int n;

    while(scanf("%d", &n) != EOF){
        memset(flag, 0, sizeof(flag));
        //memset(dp, 0, sizeof(dp));

        if(n == 0) break;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d", &temp);
            dp[0] = 0;
            for(int j = 1; j <= temp; j++){
                dp[j] = INT_MAX;
            }
            //fun(3);
            sum += fun(temp);
        }
        cout << sum <<endl;
    }


    return 0;
}
//pid2024
