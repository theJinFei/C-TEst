#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int N ,cnt = 0;
    cin>>N;
    char a[50],b[50];
    double sum = 0.0,temp;
    for(int i=0;i<N;i++){
        scanf("%s",a);
        sscanf(a,"%lf",&temp);
        sprintf(b,"%.2lf",temp);
        int flag = 0;
        for(int j=0;j<strlen(a);j++){
            if(a[j]!=b[j]){
                flag = 1;
            }
        }
        if(flag||temp>1000||temp<-1000){
            printf("%s is not a legal number\n",a);
            continue;
        }else {
            sum += temp;
            cnt++;
        }
    }
    if(cnt == 1){
        printf("The average of 1 number is %.2lf",sum);
    }else if(cnt>1){
        printf("The average of %d numbers is %.2lf", cnt, sum / cnt);
    }else {
        printf("The average of 0 numbers is Undefined");
    }
    return 0;
}
