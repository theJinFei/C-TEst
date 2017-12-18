/*******
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int m,n;
    cin >> n >> m;
    int a[1000][1000];
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][m-i];
        }
        cout << endl;
    }
    //system("pause");


    //swap(m,n);
    return 0;
}
*******/
#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
    //n为行数，m为列数
    int m, n;
    int i, j;
    int a[100][100];
    while (scanf("%d",&n) != EOF && scanf("%d",&m) != EOF) {
        //memset(a, 0, sizeof(n));
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j ++) {
                //进行矩阵录入
                cin>>a[i][j];
            }
        }
        for (i = 1; i <= m; i++) {
            if (i != 1) {
                cout<<endl;
            }
            for (j = 0; j < n; j ++) {
                //按格式输出转换后的矩阵
                if (j == n-1) {
                    cout<<a[j][m-i];
                }else {
                    cout<<a[j][m-i]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
