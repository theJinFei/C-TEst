#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;

void print(int (*x)[3], int row_size); //打印出传给的矩阵
int fun_addAndSubtract(int a, int b); //有限域内加法和减法（都是基于异或的）
int fun_Multiply(int a, int b); //有限域内的乘法（基于查表的）
int fun_divide(int a, int b); //有限域内的除法（基于反查表的）
int fun_GaussBaseGf(int (*a)[3], int row_size); //实现高斯消元 求解矩阵的逆

//想实现 将伽罗华域映射为柯西矩阵
//最后寻找最优的柯西矩阵使总的运算量 最小
//先生成伽罗华的加和乘的规则
const vector<vector<int> > add_v = {
    {0, 1, 2, 3, 4, 5, 6, 7},
    {1, 0, 3, 2, 5, 4, 7, 6},
    {2, 3, 0, 1, 6, 7, 4, 5},
    {3, 2, 1, 0, 7, 6, 5, 4},
    {4, 5, 6, 7, 0, 1, 2, 3},
    {5, 4, 7, 6, 1, 0, 3, 2},
    {6, 7, 4, 5, 2, 3, 0, 1},
    {7, 6, 5, 4, 3, 2, 1, 0}
};
const vector<vector<int> > multi_v = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 2, 3, 4, 5, 6, 7},
    {0, 2, 4, 6, 3, 1, 7, 5},
    {0, 3, 6, 5, 7, 4, 1, 2},
    {0, 4, 3, 7, 6, 2, 5, 1},
    {0, 5, 1, 4, 2, 7, 3, 6},
    {0, 6, 7, 1, 5, 3, 2, 4},
    {0, 7, 5, 2, 1, 6, 4, 3}
};




int main()
{
    int a[3][3] = {{0, 1, 0},
              {6, 4, 3},
            {7, 5, 3}};
    fun_GaussBaseGf(a, 3);
    return 0;
}
//打印出矩阵
void print(int (*x)[3], int row_size)
{
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < 3; j++){
            cout << setw(10) << x[i][j] << " ";
        }
        cout << endl;
    }
}
//分别对应伽罗华域中的运算 加减--异或 乘为查表操作 除以反查表操作
int fun_addAndSubtract(int a, int b)
{
    return add_v[a][b];
}
int fun_Multiply(int a, int b)
{
    return multi_v[a][b];
}
int fun_divide(int a, int b)
{
    for(int k = 0; k < 8; k++){
        if(multi_v[b][k] == a){
            return k;
        }
    }
}

//高斯消元法
int fun_GaussBaseGf(int (*a)[3], int row_size)
{
    cout << "原始矩阵为：" << endl;
    print(a, 3);
    int b[3][3] = {{1, 0, 0},
              {0, 1, 0},
            {0, 0, 1}}; //最后得出的逆矩阵
    int i, j, k, N = 3;
    //查找主元
    for(i = 0; i < N; i++){
        int max = a[i][i];
        k = i;
        for(j = i + 1; j < N; j++){
            if(abs(a[j][i]) > abs(max)){
                max = a[j][i];
                k = j;
            }
        }
        //如果第i行不是主元，则将第i行与第k行进行互换(记得要连着单位矩阵)
        if(k != i){
            for(j = 0; j < N; j++){
                int temp = a[i][j];
                a[i][j] = a[k][j];
                a[k][j] = temp;

                temp = b[i][j];
                b[i][j] = b[k][j];
                b[k][j] = temp;
            }
            cout << "查找主元，经过变换后矩阵为：" << endl;
            print(a, N);
        }

        //判断主元是否为0，若是，则矩阵A不是满秩矩阵
        if(a[i][i] == 0){
            cout << "There is no inverse matrix!" << endl;
            return 0;
        }

        int temp = a[i][i]; //temp为要收缩的比例
        for(k = 0; k < N; k++){
            a[i][k] = fun_divide(a[i][k], temp);
            b[i][k] = fun_divide(b[i][k], temp);
        }

        for(j = 0; j < N; j++){
            if(j != i){
                int temp = a[j][i];
                for(k = 0; k < N; k++){
                    a[j][k] = fun_addAndSubtract(a[j][k], fun_Multiply(a[i][k], temp));
                    b[j][k] = fun_addAndSubtract(b[j][k], fun_Multiply(b[i][k], temp));
                }
            }
        }
        cout <<"第" << i + 1 << "列"<< "经过变换后矩阵为：" << endl;
        print(a, N);
        //getchar();
    }
    cout <<"最后变换后矩阵为：" << endl;
    print(b, N);
    return 1;
}
