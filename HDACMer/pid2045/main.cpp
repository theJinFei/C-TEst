#include<stdio.h>
#include<string.h>
#include<math.h>
//#include<stdlib.h>
#include<algorithm>
#include<iostream>
const int maxn=410;
int b[6]= {1,5,10,25,50};
int main() {
    int i,j,k,g,f;
    int n;
    while(scanf("%d",&n)!=EOF) {
        int ans=0,t,m=100;
        for(i=0; i<=n; i++) {
            for(j=0; j<=(n-i*b[0])/b[1]; j++) {
                for(k=0; k<=(n-i*b[0]-j*b[1])/b[2]; k++) {
                    for(g=0; g<=(n-i*b[0]-j*b[1]-k*b[2])/b[3]; g++) {
                        for(f=0; f<=(n-i*b[0]-j*b[1]-k*b[2]-g*b[3])/b[4]; f++) {
                            if(n-i*b[0]-j*b[1]-k*b[2]-g*b[3]-f*b[4]==0&&(i+j+k+g+f)<=m)
                                ans++;
                        }
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
