#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
struct Date
{
    int yearTh;
    int monthTh;
    int weekTh;
    int dayTh;
public:
    Date(int y, int m, int w, int d){
        yearTh = y;
        monthTh = m;
        weekTh = w;
        dayTh = d;
    }
};
int daysOfMonth[2][13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
                    ,0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31               };
//判断是否为闰年
bool judgeIsLeapYear(int year)
{
 if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
     return true;
 else
     return false;
}

//计算当年的某月的第一天据1850年1月1日的天数
int computeDays(Date &date)
{
    int days = 0;
    int index = 0;
    //距离多少年 加一起
    for(int i = 1850; i < date.yearTh; i++){
        if(judgeIsLeapYear(i)){
            days += 366;
        }else {
            days += 365;
        }
    }
    //把月份也加一起
    if(judgeIsLeapYear(date.yearTh)){
        index = 1;
    }else {
        index = 0;
    }
    for(int i = 1; i < date.monthTh; i++){
        days += daysOfMonth[index][i];
    }
    days ++;//到本月份的第一天
    return days;
}
int main()
{
    int years1, years2, month, week, day;
    while(cin >> month >> week >> day >> years1 >> years2){
        for(int i = years1; i < years2; i++){
            Date date(i, month, week, day);
            int days = computeDays(date);
            int FebIndex = 0;
            if(judgeIsLeapYear(date.yearTh)){
                FebIndex = 1;
            }else {
                FebIndex = 0;
            }
            int dayth = days % 7;
            if(dayth == 0){
                dayth = 7;
            }
            int curDays = date.dayTh + (date.weekTh - 1) * 7 - dayth;
            if(curDays <= 0 || curDays > daysOfMonth[FebIndex][date.monthTh]){
                cout << "none" <<endl;
            }else {
                cout << date.yearTh << ' ' << date.monthTh << ' ' << curDays<<endl;
            }

        }
    }
    return 0;
}
