#include <iostream>
#include <cstdio>


using namespace std;
const int maxn = 15;
int ans[maxn];
int joseph[maxn];

int main(){
	int k;
	while(scanf("%d",&k)!=EOF,k){
		if(joseph[k] != 0){//���֮ǰ�Ѿ���������ͬ��kֵ
			printf("%d\n",joseph[k]);//��ֱ������������TLE
			continue;
		}

		int m = 1;//��С�����1
		int n = 2*k;//����������

		int i;
		for(i = 1 ; i <= k ; ++i){//�ж�һ��mֵ��k�������Ƿ��ɱ������
			ans[i] = (ans[i-1]+m-1)%(n-i+1);//������һ��Ҫɱ����λ��.(ans[i-1]+m-1)����һ��Ҫɱ��������.(n-i+1):��ǰʣ������
			if(ans[i] < k){//���ɱ���˺���
				i=0;//˵����ǰmֵ������,���Ŀ�ʼ����
				m++;//ȥ��һ��mֵ
			}
		}
		joseph[k] = m;//��k����Ѿ����mֵ�˾ͼ�¼��������һ���������ͬ��k�Ͳ���Ҫ�ٴμ�����

		printf("%d\n",m);
	}

	return 0;
}
