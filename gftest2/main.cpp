#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;

void print(int (*x)[3], int row_size); //��ӡ�������ľ���
int fun_addAndSubtract(int a, int b); //�������ڼӷ��ͼ��������ǻ������ģ�
int fun_Multiply(int a, int b); //�������ڵĳ˷������ڲ��ģ�
int fun_divide(int a, int b); //�������ڵĳ��������ڷ����ģ�
int fun_GaussBaseGf(int (*a)[3], int row_size); //ʵ�ָ�˹��Ԫ ���������

//��ʵ�� ��٤�޻���ӳ��Ϊ��������
//���Ѱ�����ŵĿ�������ʹ�ܵ������� ��С
//������٤�޻��ļӺͳ˵Ĺ���
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
//��ӡ������
void print(int (*x)[3], int row_size)
{
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < 3; j++){
            cout << setw(10) << x[i][j] << " ";
        }
        cout << endl;
    }
}
//�ֱ��Ӧ٤�޻����е����� �Ӽ�--��� ��Ϊ������ ���Է�������
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

//��˹��Ԫ��
int fun_GaussBaseGf(int (*a)[3], int row_size)
{
    cout << "ԭʼ����Ϊ��" << endl;
    print(a, 3);
    int b[3][3] = {{1, 0, 0},
              {0, 1, 0},
            {0, 0, 1}}; //���ó��������
    int i, j, k, N = 3;
    //������Ԫ
    for(i = 0; i < N; i++){
        int max = a[i][i];
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
                int temp = a[i][j];
                a[i][j] = a[k][j];
                a[k][j] = temp;

                temp = b[i][j];
                b[i][j] = b[k][j];
                b[k][j] = temp;
            }
            cout << "������Ԫ�������任�����Ϊ��" << endl;
            print(a, N);
        }

        //�ж���Ԫ�Ƿ�Ϊ0�����ǣ������A�������Ⱦ���
        if(a[i][i] == 0){
            cout << "There is no inverse matrix!" << endl;
            return 0;
        }

        int temp = a[i][i]; //tempΪҪ�����ı���
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
        cout <<"��" << i + 1 << "��"<< "�����任�����Ϊ��" << endl;
        print(a, N);
        //getchar();
    }
    cout <<"���任�����Ϊ��" << endl;
    print(b, N);
    return 1;
}
