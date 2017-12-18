#include<stdio.h>
main()
{
    int n,cas,m;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        m=n%10;
        if(m==0||m==1||m==5||m==6)
            printf("%d\n",m);
        if(m==2)
        {
            if (n%4==1) printf("2\n");
            if (n%4==2) printf("4\n");
            if (n%4==3) printf("8\n");
            if (n%4==0) printf("6\n");
        }
        if(m==3)
        {
            if (n%4==1) printf("3\n");
            if (n%4==2) printf("9\n");
            if (n%4==3) printf("7\n");
            if (n%4==0) printf("1\n");
        }
        if(m==7)
        {
            if (n%4==1) printf("7\n");
            if (n%4==2) printf("9\n");
            if (n%4==3) printf("3\n");
            if (n%4==0) printf("1\n");
        }
        if(m==8)
        {
            if (n%4==1) printf("8\n");
            if (n%4==2) printf("4\n");
            if (n%4==3) printf("2\n");
            if (n%4==0) printf("6\n");
        }
        if (m==4)
        {
            if (n%2==1) printf("4\n");
            if (n%2==0) printf("6\n");
        }
        if (m==9)
        {
            if (n%2==1) printf("9\n");
            if (n%2==0) printf("1\n");
        }
    }
}
