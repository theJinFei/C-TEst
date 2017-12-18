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
int arr[200][200] = {0};
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;
        for(int k = a1; k < a2; k++){
            for(int j = b1; j < b2; j++){
                arr[k][j] = 1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(arr[i][j] != 0){
                ans ++;
            }
        }

    }
    cout << ans ;
    return 0;
}
