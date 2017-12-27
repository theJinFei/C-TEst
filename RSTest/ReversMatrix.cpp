 //********************************
//*** 求任何一个实矩阵的逆***
//********************************
//#include "stdafx.h"
#include <math.h>
#include <malloc.h>
#include <iostream>
#include <iomanip>
using namespace std;
#define  N  10                //定义方阵的最大阶数为10
//函数的声明部分
bool Gauss(float A[][N], float B[][N], int n);    //采用部分主元的高斯消去法求方阵A的逆矩阵B
//int main()
//{
//    int i, j;
//    int n = 3;
//    float a[N][N], b[N][N];
//
//    cout << "采用部分主元的高斯消去法求方阵的逆矩阵!\n";
//    //输入一个n阶方阵
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    //运用高斯消去法求该矩阵的逆矩阵并输出
//    if (Gauss(a, b, n))
//    {
//        cout << "该方阵的逆矩阵为: \n";
//        for (i = 0; i < n; i++)
//        {
//            cout << setw(4);
//            for (j = 0; j < n; j++)
//            {
//                cout << b[i][j] << setw(10);
//            }
//            cout << endl;
//        }
//    }
//	//getchar();
//    return 0;
//}
//
//
////------------------------------------------------------------------
////功能: 采用部分主元的高斯消去法求方阵A的逆矩阵B
////入口参数: 输入方阵，输出方阵，方阵阶数
////返回值: true or false
////-------------------------------------------------------------------
//bool Gauss(float A[][N], float B[][N], int n)
//{
//    int i, j, k;
//    float max, temp;
//    float t[N][N];                //临时矩阵
//    //将A矩阵存放在临时矩阵t[n][n]中
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            t[i][j] = A[i][j];
//        }
//    }
//    //初始化B矩阵为单位阵
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            B[i][j] = (i == j) ? (float)1 : 0;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        //寻找主元
//        max = t[i][i];
//        k = i;
//        for (j = i+1; j < n; j++)
//        {
//            if (fabs(t[j][i]) > fabs(max))
//            {
//                max = t[j][i];
//                k = j;
//            }
//        }
//        //如果主元所在行不是第i行，进行行交换
//        if (k != i)
//        {
//            for (j = 0; j < n; j++)
//            {
//                temp = t[i][j];
//                t[i][j] = t[k][j];
//                t[k][j] = temp;
//                //B伴随交换
//                temp = B[i][j];
//                B[i][j] = B[k][j];
//                B[k][j] = temp;
//            }
//        }
//        //判断主元是否为0, 若是, 则矩阵A不是满秩矩阵,不存在逆矩阵
//        if (t[i][i] == 0)
//        {
//            cout << "There is no inverse matrix!";
//            return false;
//        }
//        //消去A的第i列除去i行以外的各行元素
//        temp = t[i][i];
//        for (j = 0; j < n; j++)
//        {
//            t[i][j] = t[i][j] / temp;        //主对角线上的元素变为1
//            B[i][j] = B[i][j] / temp;        //伴随计算
//        }
//        for (j = 0; j < n; j++)        //第0行->第n行
//        {
//            if (j != i)                //不是第i行
//            {
//                temp = t[j][i];
//                for (k = 0; k < n; k++)        //第j行元素 - i行元素*j列i行元素
//                {
//                    t[j][k] = t[j][k] - t[i][k]*temp;
//                    B[j][k] = B[j][k] - B[i][k]*temp;
//                }
//            }
//        }
//    }
//	//getchar();
//    return true;
//}
