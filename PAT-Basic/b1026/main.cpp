#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;

int main()
{
    int C1,C2;
    cin>>C1>>C2;
    int AllSecond = (C2-C1)/100;
     if((C2-C1)%100>=50)
        AllSecond++;
    int hour = AllSecond / 3600;
    int minutes = AllSecond%3600/60;
    int second = AllSecond%60;
    printf("%02d:%02d:%02d\n", hour, minutes, second);
}
