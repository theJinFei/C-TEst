#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#define N 100000001
using namespace std;

typedef long long ll;

ll f[N];

int main()
{
    int n,ans;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2;i < 21;i++){
        f[i] = f[i-1] + f[i-2];
    }
    //memset(emeo,0,sizeof(emeo));//初始化，将其全部标记为0
    while(scanf("%d",&n)!=EOF){
        if(n<21){
            int ans = f[n];
            cout<<ans<<endl;
        }else {
            double ans = -0.5*log10(5.0) + n*log10((1+sqrt(5))/2);
            ans -= floor(ans);
            ans = pow(10,ans);
            ans = ans * 1000;
            printf("%d\n",(int)ans);
        }
    }
    return 0;
}
