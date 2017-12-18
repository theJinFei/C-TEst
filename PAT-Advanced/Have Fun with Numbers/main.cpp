#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
#include <string>
#include <string.h>
using namespace std;
int book[10]={0};
int main()
{
    char a[22];
    scanf("%s",a);
    int flag = 0;
    int len = strlen(a);
    for(int i=len-1;i>=0;i--){
        int temp = a[i]-'0';
        book[temp]++;
        temp = temp*2 + flag;
        flag = 0;
        if(temp>=10){
            flag = 1;
            temp -= 10;
        }
        a[i] = temp + '0';
        book[temp]--;
    }
    int flag1 = 0;
    for(int i=0;i<10;i++){
        if(book[i]!=0){
            flag1 = 1;
            break;
        }
    }
    if(flag == 1 || flag1 == 1){
        printf("No\n");
    }else {
        printf("Yes\n");
    }
    if(flag == 1){
        printf("1");
    }
    for(int i=0;i<len;i++){
        printf("%c",a[i]);
    }
    return 0;
}
