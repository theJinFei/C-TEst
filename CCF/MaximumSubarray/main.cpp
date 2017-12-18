#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int dp(int a[], int length)
{
    int sum = 0;
    int ans = INT_MIN;
    //int MAX = INT_MAX;
    for(int i = 0; i < length; i++){
        sum += a[i];
        ans = max(sum, ans);
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}
int main()
{
    int a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << dp(a, n) << endl;
    return 0;
}
