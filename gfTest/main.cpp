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
//GF(2^3)���ɾ���
const vector<vector<int> >  GenerMatix = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1},
    {6, 4, 3},
    {1, 1, 1},
    {6, 5, 2},
    {7, 5, 3}
};
//GF(2^3)��У�����
const vector<vector<int> > HMatix = {
    {6, 4, 3, 1, 0, 0, 0},
    {1, 1, 1, 0, 1, 0, 0},
    {6, 5, 2, 0, 0, 1, 0},
    {7, 5, 3, 0, 0, 0, 1}
};
int b[3][3] = {{1, 0, 0},
              {0, 1, 0},
            {0, 0, 1}}; //���ó��������
int a[3][3] = {0};
const vector<int> before_M = {6, 5, 4};
const int size_n = 7;
const int size_r = 3;
vector<int> after_M(7);
int main()
{
    vector<vector<int> > GenerMatix_After = GenerMatix;
    for(int i = 0; i < size_n; i++){
        after_M[i] = 0;
        for(int j = 0; j < size_r; j++){
             after_M[i] = fun_addAndSubtract(after_M[i], fun_Multiply(GenerMatix[i][j], before_M[j]));
        }
    }
    cout << "����������Ϊ��" << endl;
    for(int i = 0; i < after_M.size(); i++){
        cout << after_M[i] << " ";
    }
    cout << endl;

    //����100��100���ڲ��ظ������
    int temp[100] = {0};
    for(int i=0; i<=6; ++i) temp[i]=i;
    for(int i=6; i>=1; --i) swap(temp[i], temp[rand()%i]);
    cout << "���ɾ��Ԫ��ǰ�Ľ��Ϊ��" << endl;
    for(int i = 0; i < GenerMatix_After.size(); i++){
        for(int j = 0; j < GenerMatix_After[i].size(); j++){
            cout << GenerMatix_After[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 4; i++){
        GenerMatix_After.erase(GenerMatix_After.begin() + temp[i]); //��ǰ�����ɵ������ ���ɾ������ ģ����ʧЧ
        after_M.erase(after_M.begin() + temp[i]);
    }
    cout << "���ɾ��Ԫ�غ����ɾ���Ľ��Ϊ��" << endl;
    for(int i = 0; i < GenerMatix_After.size(); i++){
        for(int j = 0; j < GenerMatix_After[i].size(); j++){
            cout << GenerMatix_After[i][j] << " ";
        }
        cout << endl;
    }
    cout << "���ɾ��Ԫ�غ�ʣ���Ԫ�صĽ��Ϊ��" << endl;
    for(int i = 0; i < after_M.size(); i++){
        cout << after_M[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            a[i][j] = GenerMatix_After[i][j];
        }
    }
    if(fun_GaussBaseGf(a, 3)){
        cout << "������˹��Ԫ�����ɵ������Ϊ��" << endl;;
        print(b, 3);
    }
    vector<int> res(3);
    for(int i = 0; i < 3; i++){
        res[i] = 0;
        for(int j = 0; j < 3; j++){
            res[i] = fun_addAndSubtract(res[i], fun_Multiply(b[i][j], after_M[j]));
        }
    }
    cout << "�ָ�����������Ϊ��" << endl;
    int flag = 1;
    for(int i = 0; i < 3; i++){
        cout << res[i] << " ";
        if(res[i] != before_M[i]){
            flag = 0;
        }
    }
    if(flag){
        cout << "�ָ��ɹ���" << endl;
    }else {
        cout << "�ָ�ʧ�ܣ�" << endl;
    }
    getchar();

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
