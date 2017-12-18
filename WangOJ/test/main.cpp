#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    int n;
    while(scanf("%d", &n)) {
        if(n == 0) break;
        vector<int> v1(n);
        int nSum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v1[i];
            if(v1[i] < 0) {
                nSum ++;
            }
        }
        int ans = INT_MIN;
        int sum = 0;
        int end, start;
        int x;
        for(int i = 0; i < n; i++) {
            sum += v1[i];
            //ans = max(sum, ans);
            if(sum > ans) {
                ans = sum;
                end = v1[i];  //����ÿ�ν��������ֵ
                x = i; //ÿ�������еĳ���
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        int temp = 0;
        for(int i = x; i >= 0; i--) {
            temp += v1[i]; //�ҿ�ʼ��λ��
            if(temp == ans) {
                start = v1[i];
                break;
            }
        }
        if(nSum==n)
            printf("0 %d %d\n",v1[0],v1[n-1]);
        else
            printf("%d %d %d\n",ans,start,end);
    }
    return 0;
}
