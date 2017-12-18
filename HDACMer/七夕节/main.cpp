#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int temp,result = 1;
        scanf("%d", &temp);
        for(int i = 2; i <= sqrt((temp)); i++){
            if(temp % i==0){
               result += i;
               int x = temp / i;
               if (x != i) {
                    result += x;
               }
            }
        }

        printf("%d\n", result);
    }
    return 0;
}
