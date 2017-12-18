
#include <stdio.h>

using namespace std;
int main()
{
    unsigned long a,b,n,max,temp,sum;
    while(~scanf("%d %d",&a,&b)){
        printf("%ld %ld",a,b);
        if ( a > b ) {
            temp = a;
            a = b;
            b = temp;
        };
        max = 0;
        for(int i=a;i<=b;i++){
            n = i;
            sum = 1;
            while(n!=1){
                n = n%2?3*n+1:n/2;
                sum++;
            }
            max = sum>max?sum:max;
        }
        printf(" %ld\n", max);
        //cout<<a<<" "<<b<<" "<<max<<endl;
    }

    return 0;
}
