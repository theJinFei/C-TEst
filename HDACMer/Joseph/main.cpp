#include <iostream>
#include <cstdio>


using namespace std;
const int maxn = 15;
int ans[maxn];
int joseph[maxn];

int main(){
	int k;
	while(scanf("%d",&k)!=EOF,k){
		if(joseph[k] != 0){//如果之前已经遇到过相同的k值
			printf("%d\n",joseph[k]);//则直接输出。否则会TLE
			continue;
		}

		int m = 1;//最小间隔是1
		int n = 2*k;//计算总人数

		int i;
		for(i = 1 ; i <= k ; ++i){//判断一个m值在k轮里面是否会杀掉好人
			ans[i] = (ans[i-1]+m-1)%(n-i+1);//计算下一个要杀掉的位置.(ans[i-1]+m-1)是下一个要杀掉的索引.(n-i+1):当前剩余人数
			if(ans[i] < k){//如果杀掉了好人
				i=0;//说明当前m值不合适,从心开始试验
				m++;//去下一个m值
			}
		}
		joseph[k] = m;//额k如果已经求出m值了就记录下来。下一次如果是相同的k就不需要再次计算了

		printf("%d\n",m);
	}

	return 0;
}
