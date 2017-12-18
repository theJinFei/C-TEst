#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <limits.h>
using namespace std;
int a[100001];

int main()
{
    int n;
    memset(a,0,sizeof(a));
    cin >> n;
    int flag = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 0){
            flag  = 0;
        }
    }
    if(flag){
        cout << "0" << " " << a[0] << " " << a[n-1];
        return 0;
    }
    int sum = 0, ans = 0, x = 0, max = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum > ans){
            ans = sum;
            max = i;
            x++;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << ans ;
    cout << " " << a[max - x + 1]<<" "<< a[max] ;
    return 0;
}
