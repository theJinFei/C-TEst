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
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[100000] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0, sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++)
            sum += a[j];
            if(sum % k == 0){
                ans ++;
            }else {
                sum  = 0;
            }
    }
    cout << ans;
    return 0;
}
