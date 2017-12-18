#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char> > a(n, vector<char>(m));
    vector<vector<char> > temp(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int ans = 1;
        for(int j = 1; j < m; j++){
            if(a[i][j] == a[i][j-1]) ans++;
            else ans = 1;
            if(ans >= 3){
                for(int k = j; k > j - ans ; k--) temp[i][k] = 1;
            }
        }
    }
    for(int j = 0; j < m; j++){
        int ans = 1;
        for(int i = 1; i < n; i++){
            if(a[i][j] == a[i-1][j]) ans++;
            else ans = 1;
            if(ans >= 3){
                for(int k = i; k > i - ans ; k--) temp[k][j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(temp[i][j] == 1){
                cout << "0 ";
            }else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl ;
    }
    return 0;
}
