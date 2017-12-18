#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Student
{
    char no[100];
    char name[100];
    int age;
    char sex[15];
    bool operator < (const Student &s) const{
        return strcmp(no,s.no);
    }
}buf[1000];
int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%s%s%s%d", buf[i].no, buf[i].name, buf[i].sex, &buf[i].age);
        }
        sort(buf, buf + n);
        int t;
        scanf("%d", &t);
        while(t--){
            int ans = -1;
            char x[30]; //´ý²éÕÒµÄÑ§ºÅ
            scanf("%s",x);
            int top = n - 1, base = 0;
            while(top >= base){
                int mid = (top + base) / 2;
                int tmp = strcmp(buf[mid].no, x);
                if(tmp == 0){
                    ans = mid;
                    break;
                }else if(tmp > 0){
                    top = mid - 1;
                }else {
                    base = mid + 1;
                }
            }
            if(ans == -1){
                printf("No Answer!\n");
            }else {
                printf("%s %s %s %d\n", buf[ans].no, buf[ans].name, buf[ans].sex, buf[ans].age);
            }
        }
    }
    return 0;
}
