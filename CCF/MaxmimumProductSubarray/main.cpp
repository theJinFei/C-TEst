#include <iostream>
#include <algorithm>
#include <limits.h>
#include <fstream>
#include <string.h>
using namespace std;
//쳲������� ��������м����
int f(int n)
{
    vector<int> F(n + 1, 0);
    F[1] = F[2] = 1;
    for(int i = 3; i < n; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
int a[2000][2000]; //����ȫ������ ������Ĭ�ϳ�ʼ��
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
    //    �������Sumֵ
    //    for(int i = 0; i < n; i++){
    //        sum += a[i];
    //        ans = max(sum,ans);
    //        if(sum < 0){
    //            sum = 0;
    //        }
    //    }
    ////////////////////////////////////////////////
    //    ��������˻�ֵ
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
    //    ��Ǯ dp˼��
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
    //    �������� ����Щ��ȵ���ֵ���
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
    //    �����������
    //    const int n = 9;
    //    freopen("in.txt","r",stdin);
    //    int a[100] = {0};
    //    int d[100] = {0};
    //    int ans = 0;
    //    for(int i = 0; i < n; i++){
    //        cin >> a[i];
    //    }
    //    //״̬ת�Ʒ���
    //    //d(i) = max{1, d(j)+1},����j<i,A[j]<=A[i]
    //    //�ô�׻����;��ǣ�
    //    //��Ҫ��d(i)���Ͱ�iǰ��ĸ�����������
    //    //���һ����������A[i]�����г��ȼ�1��Ȼ��ȡ�����ĳ��ȼ�Ϊd(i)��
    //    //��Ȼ�ˣ��п���iǰ��ĸ��������������һ����������A[i]����ôd(i)=1��
    //    //���������Ϊһ������Ϊ1�������С�
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
    //  ���������������
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
    //    ��ƻ������ ֻ�����»�������
    //    int dp[100][100];
    //    int a[3][4] = {
    //                23, 45, 56, 32,  // ��ȷ·��Ϊ 23 45 56 32 21 90
    //                18, 19, 20, 21,
    //                7, 19, 20, 90
    //            };
    //    memset(dp, 0, sizeof(dp));
    //    //int ans  = 0;
    //    dp[0][0] = a[0][0]; //��ʼ��
    //    for(int i = 0; i < 3; i++){
    //        for(int j = 0; j < 4; j++){
    //            if(i == 0 && j == 0) continue;
    //            dp[i][j] = max((j==0)?0:dp[i][j-1],(i==0)?0:dp[i-1][j]) + a[i][j];
    //        }
    //    }
    //    cout << dp[2][3];
    ////////////////////////////////////////////////
    //    �������� ��N����Ʒ��һ������ΪV�ı�������i����Ʒ�ķ�����c[i]����ֵ��w[i]��
    //    ��⽫��Щ��Ʒװ�뱳����ʹ��ֵ�ܺ����
    //    ������ı������⣬�ص��ǣ�ÿ����Ʒ����һ��������ѡ��Ż򲻷š�
    //    ����i���Ż��ǲ���
    //    �������ⶨ��״̬����f[i][v]��ʾǰi����Ʒǡ����һ������Ϊv�ı������Ի�õ�����ֵ������״̬ת�Ʒ��̱��ǣ�
    //    f[i][v]=max{f[i-1][v],f[i-1][v-c[i]]+w[i]} �ŵĻ�ǰi-1����Ʒ����ʣ�µ�����Ϊv-c[i]�ı�����
    //    for(int i = 1; i <= n; i++)
    //    {
    //        for(int j = 0; j <= W; j++)
    //        {
    //            if(j < w[i]) //�����ǰ�����������Գ��ܵ�i����Ʒ������
    //                dp[i][j]  = dp[i-1][j];
    //            else
    //                dp[i][j] =  max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
    //        }
    //    }

    return 0;

}
