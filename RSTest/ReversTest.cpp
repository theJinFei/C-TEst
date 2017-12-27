#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
void print(double (*x)[3], int row_size)
{
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < 3; j++){
            cout << setw(10) << x[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int N = 3;
    double a[3][3] = {{0, 1, 2},
                {-2, 2, 0},
                {3, 1, 3}};
    double b[3][3] = {{1, 0, 0},
                {0, 1, 0},
                {0, 0, 1}};
    cout << "ԭʼ����Ϊ��" << endl;
    print(a, 3);
    int i, j, k;
    //������Ԫ
    for(i = 0; i < N; i++){
        double max = a[i][i];
        k = i;
        for(j = i + 1; j < N; j++){
            if(abs(a[j][i]) > abs(max)){
                max = a[j][i];
                k = j;
            }
        }
        //�����i�в�����Ԫ���򽫵�i�����k�н��л���(�ǵ�Ҫ���ŵ�λ����)
        if(k != i){
            for(j = 0; j < N; j++){
                double temp = a[i][j];
                a[i][j] = a[k][j];
                a[k][j] = temp;

                temp = b[i][j];
                b[i][j] = b[k][j];
                b[k][j] = temp;
            }
            cout << "������Ԫ�������任�����Ϊ��" << endl;
            print(a, N);
        }
        double temp = a[i][i]; //tempΪҪ�����ı���
        for(k = 0; k < N; k++){
            a[i][k] = a[i][k] / temp;
            b[i][k] = b[i][k] / temp;
        }

        for(j = 0; j < N; j++){
            if(j != i){
                double temp = a[j][i];
                for(k = 0; k < N; k++){
                    a[j][k] = a[j][k] - a[i][k] * temp;
                    b[j][k] = b[j][k] - b[i][k] * temp;
                }
            }
        }
        cout <<"��" << i + 1 << "��"<< "�����任�����Ϊ��" << endl;
        print(a, N);
        //getchar();
    }
    cout <<"���任�����Ϊ��" << endl;
    print(b, N);











}
