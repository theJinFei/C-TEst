/**
����һ����Ϊ num �������⣬����Ҫ��num^num �����λ��
��ʵnum^num ���ݿ�ѧ�����������Ա�ʾΪa*10^n��
a������λ�����λ������
������ num^num=a*10^n
����ͬʱȡ������num*lg(num)=lg(a)+n
���У�lg(a)=num*lg(num)-n
����a=10^(num*lg(num)-n)
���У�n����int(num*lg(num))    //��Ϊint(lg(num^num))��������ʮ������!
���a=10^(num*lg(num)-int(num*lg(num))       //����ʱ���int����long long int ����������ʱ
����������������������������������������������������������������������������������������������������
������ʱ�����Ҫǿ��ת�����ͣ�����(int)(x) ����ʽת��������ϵͳ����ΪCompilation Error
**/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double temp;
        cin >> temp;
        double t = log10(temp) * temp;
        double result = pow(10,t-(long long )(t));
        while(result>=10){
            result /= 10;
        }
        cout<<(long long )(result)<<endl;
    }
    return 0;
}
