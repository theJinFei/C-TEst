#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include <set>
#include<algorithm>
#include <limits.h>
#include <ctype.h>
#include <map>
#include <stack>
#include <vector>
#include <sstream>
#include <string.h>
typedef long long LL;
using namespace std;
const int N = 101;
int data[N][N];
#define PI 3.1415926
typedef __int64 LL;
1�����ӵ�ʱ��   3��
2�����ӵ�ʱ��   6��
3�����ӵ�ʱ��   6��
4�����ӵ�ʱ��
�����������
��1��ǰ�����ֶ��ź�
R
P
G
���ĸ����ӵ�ʱ��ֻ��һ�ֿ��ܣ�P

��2��ǰ�������ź�
R
P
R
���ĸ����ӵ�ʱ��ֻ�������ֿ��ܣ�P��G

Ҳ����˵��
�����n�����񣬵��Ե�n��������ɫʱ�������������

����Ӧ���Ѿ���ǰ��n-1�����������ɫ����f(n-1)���������ʱ��n-1������һ����ɫһ����һ�������Ե�n��ֻ��һ��ѡ��
������ǰ��n-2���������ɫ����f(n-2)���������n-1���ո���ɫ����һ����ɫһ��������ͳ���������������ˣ���ֻ��һ�ֿ��ܣ�����n�����������������ɫ����Ϊn-���ͣ��ǵ�ͬ����ɫ���������ǡ���*f(n-2);

                   �����Ƴ�f(n)=f(n-1)+2(n-2),n>=4;

�����У�

f(n)=f(n-1)+2*f(n-2)
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //memset(data, 1, sizeof(data)); //��ʼ��Ϊ1 ΪûԤ����״̬

    int n;
    while(scanf("%d", &n) != EOF){
        LL temp = 3 * pow(2, (n - 1));
        cout << temp << endl;
    }


    return 0;
}




