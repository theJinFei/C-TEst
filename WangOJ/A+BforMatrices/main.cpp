#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while(cin >> n){
        if(n == 0) break;
        cin >> m;
        int a[n][m],b[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> b[i][j];
                a[i][j] = b[i][j] + a[i][j];
            }
        }
        int ans = 0, flag;
        for(int i = 0; i < n; i++){
            flag = 1;
            for(int j = 0; j < m; j++){
                if(a[i][j] != 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans ++;
            }
        }
        for(int i = 0; i < m; i++){
            flag = 1;
            for(int j = 0; j < n; j++){
                if(a[j][i] != 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans ++;
            }
        }
        cout << ans <<endl;


    }

    return 0;
}
