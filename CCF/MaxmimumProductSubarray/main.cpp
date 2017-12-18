#include <iostream>
#include <algorithm>
#include <limits.h>
#include <fstream>
#include <string.h>
using namespace std;
//斐波那契数 用数组存中间变量
int f(int n)
{
    vector<int> F(n + 1, 0);
    F[1] = F[2] = 1;
    for(int i = 3; i < n; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
int a[2000][2000]; //声明全局数组 可以有默认初始化
int main()
{
    //    int a[100];
    //    int dp[12];
    //    memset(dp, 65535, sizeof(dp));
    //    for(int i = 0; i < 12; i++){
    //        dp[i] = INT_MAX;
    //    }
    //    freopen("in.txt", "r", stdin);
    //    int n = 11;
    //    for(int i = 0; i < 3; i++){
    //        cin >> a[i];
    //    }
    ////////////////////////////////////////////////
    //    int sum = 0;
    //    int ans = INT_MIN;
    //    最大上升Sum值
    //    for(int i = 0; i < n; i++){
    //        sum += a[i];
    //        ans = max(sum,ans);
    //        if(sum < 0){
    //            sum = 0;
    //        }
    //    }
    ////////////////////////////////////////////////
    //    最大上升乘积值
    //    if(n == 0){
    //        return 0;
    //    }else if(n == 1){
    //        return a[0];
    //    }
    //    int p = a[0];
    //    int maxP = a[0];
    //    int minP = a[0];
    //    for(int i = 1; i < n; i++){
    //        int t = maxP;
    //        maxP = max(max(maxP * a[i], a[i]),minP * a[i]);
    //        minP = min(min(minP * a[i], a[i]),t * a[i]);
    //        p = max(maxP, p);
    //    }
    //    cout << maxP ;

    ////////////////////////////////////////////////
    //    换钱 dp思想
    //    dp[0] = 0;
    //    for(int i = 1; i <= n; i++){
    //        for(int j = 0; j < 3; j++){
    //            if(i >= a[j] && dp[i - a[j]] + 1 <= dp[i]){
    //                dp[i] = dp[i - a[j]] + 1;
    //            }
    //        }
    //    }
    //    cout << dp[n];
    ////////////////////////////////////////////////
    //    数塔问题 走那些点等到的值最大
    //    freopen("in.txt","r",stdin);
    //    int n;
    //    cin >> n;
    //    for(int i = 0; i < n; i++){
    //        for(int j = 0; j <= i; j++){
    //            cin >> a[i][j];
    //        }
    //    }
    //    for(int i = n-1; i > 0; i--){
    //        for(int j = 0; j < i; j++){
    //            a[i - 1][j] += max(a[i][j],a[i][j + 1]);
    //        }
    //    }
    //    cout << a[0][0];
    ////////////////////////////////////////////////
    //    最长上升子序列
    //    const int n = 9;
    //    freopen("in.txt","r",stdin);
    //    int a[100] = {0};
    //    int d[100] = {0};
    //    int ans = 0;
    //    for(int i = 0; i < n; i++){
    //        cin >> a[i];
    //    }
    //    //状态转移方程
    //    //d(i) = max{1, d(j)+1},其中j<i,A[j]<=A[i]
    //    //用大白话解释就是，
    //    //想要求d(i)，就把i前面的各个子序列中
    //    //最后一个数不大于A[i]的序列长度加1，然后取出最大的长度即为d(i)。
    //    //当然了，有可能i前面的各个子序列中最后一个数都大于A[i]，那么d(i)=1，
    //    //即它自身成为一个长度为1的子序列。
    //    for(int i = 0; i < 9; i++){
    //        d[i] = 1;
    //        for(int j = 0; j < i; j++){
    //            if(a[j] < a[i] && d[j] + 1 > d[i]){
    //                d[i] = d[j] + 1;
    //            }
    //        }
    //        ans = max(ans,d[i]);
    //    }
    //    cout << ans;
    ////////////////////////////////////////////////
    //  最长上升公共子序列
    //    freopen("in.txt","r",stdin);
    //    //freopen("out.txt","w",stdout);
    //    string str1,str2;
    //    cin >> str1 >> str2;
    //    int dp[200][200];
    //    memset(dp,0,sizeof(dp));
    //    int lenA = str1.length();
    //    int lenB = str2.length();
    //    int ans = 0;
    //    for(int i = 1; i <= lenA; i++){
    //        for(int j = 1; j <= lenB; j++){
    //            if(str1[i - 1] == str2[j - 1]){
    //                dp[i][j] = dp[i - 1][j - 1] + 1;
    //            }else {
    //                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
    //            }
    //        }
    //    }
    //    cout << dp[lenA][lenB] ;
    ////////////////////////////////////////////////
    //    吃苹果问题 只能向下或者向右
    //    int dp[100][100];
    //    int a[3][4] = {
    //                23, 45, 56, 32,  // 正确路线为 23 45 56 32 21 90
    //                18, 19, 20, 21,
    //                7, 19, 20, 90
    //            };
    //    memset(dp, 0, sizeof(dp));
    //    //int ans  = 0;
    //    dp[0][0] = a[0][0]; //初始化
    //    for(int i = 0; i < 3; i++){
    //        for(int j = 0; j < 4; j++){
    //            if(i == 0 && j == 0) continue;
    //            dp[i][j] = max((j==0)?0:dp[i][j-1],(i==0)?0:dp[i-1][j]) + a[i][j];
    //        }
    //    }
    //    cout << dp[2][3];
    ////////////////////////////////////////////////
    //    背包问题 有N件物品和一个容量为V的背包。第i件物品的费用是c[i]，价值是w[i]。
    //    求解将哪些物品装入背包可使价值总和最大。
    //    最基础的背包问题，特点是：每种物品仅有一件，可以选择放或不放。
    //    即第i件放还是不放
    //    用子问题定义状态：即f[i][v]表示前i件物品恰放入一个容量为v的背包可以获得的最大价值。则其状态转移方程便是：
    //    f[i][v]=max{f[i-1][v],f[i-1][v-c[i]]+w[i]} 放的话前i-1件物品放入剩下的容量为v-c[i]的背包中
    //    for(int i = 1; i <= n; i++)
    //    {
    //        for(int j = 0; j <= W; j++)
    //        {
    //            if(j < w[i]) //如果当前的容量不足以承受第i个物品的重量
    //                dp[i][j]  = dp[i-1][j];
    //            else
    //                dp[i][j] =  max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
    //        }
    //    }

    return 0;

}
