#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string maxName,minName,name;
    int year,month,day,count = 0;
    int MaxYear=0,MaxMonth=0,MaxDay=0;
    int MinYear=9999,MinMonth=9999,MinDay=9999;
    for(int i=0;i<N;i++){
        cin>>name;
        scanf("%d/%d/%d",&year,&month,&day);
        if(((year<2014)||(year==2014&&month<9)||(year==2014&&month==9&&day<=6))&&
           ((year>1814)||(year==1814&&month>9)||(year==1814&&month==9&&day>=6))){
            count++;
            if((year>MaxYear)||(year==MaxYear&&month>MaxMonth)||(year==MaxYear&&month==MaxMonth&&day>=MaxDay)){
                MaxYear = year;
                MaxMonth = month;
                MaxDay = day;
                maxName = name;
            }
            if((year<MinYear)||(year==MinYear&&month<MinMonth)||(year==MinYear&&month==MinMonth&&day<=MinDay)){
                MinYear = year;
                MinMonth = month;
                MinDay = day;
                minName = name;
            }
        }
    }
    cout<<count;
    if(count!=0){
        cout<<" "<<minName<<" "<<maxName;
    }
    return 0;
}
