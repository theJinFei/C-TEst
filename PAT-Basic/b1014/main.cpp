/*
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;
    int MinLength1 = str1.size()>str2.size()?str2.size():str1.size();
    int MinLength2 = str3.size()>str4.size()?str4.size():str3.size();
    int firstflag = 1;
    for(int i=0;i<MinLength1;i++){
        if(str1[i]==str2[i] && str1[i]>='A' && str1[i]<='Z' && firstflag){
            switch(str1[i])
            {
                case 'A':cout<<"MON"<<" ";break;
                case 'B':cout<<"TUE"<<" ";break;
                case 'C':cout<<"WED"<<" ";break;
                case 'D':cout<<"THU"<<" ";break;
                case 'E':cout<<"FRI"<<" ";break;
                case 'F':cout<<"SAT"<<" ";break;
                case 'G':cout<<"SUN"<<" ";break;
                default:
                   break;
            }
            firstflag = 0;
            continue;
        }

        if(str1[i]==str2[i] && ((str1[i]>='A'&&str1[i]<='N') || (str1[i]>='0'&&str1[i]<='9'))&& firstflag == 0){
            if(str1[i]>='A'&&str1[i]<='N'){
                printf("%02d:",10+str1[i]-'A');break;
            }
                //cout<<11+str1[i]-'A'<<":";
            else if(str1[i]>='0'&&str1[i]<='9'){
                printf("%02d:",str1[i]-'0');break;
            }
                //cout<<str1[i]-'0'<<":";
        }

    }
    for(int i=0;i<MinLength2;i++){
        if(str3[i]==str4[i]&&((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z'))){
            printf("%02d",i);
            break;
        }
    }
    return 0;
}
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    char day = NULL;
    char hour = NULL;
    int flag = 0;
    for (int i = 0; i < s1.length(); ++i){
        if (i >= s2.length()){
            break;
        }
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G'
            && flag == 0){
            day = s1[i];
            flag = 1;
            continue;
        }
        if (s1[i] == s2[i] && (s1[i] >= '0' && s1[i] <= '9'
            || s1[i] >= 'A' && s1[i] <= 'N')
            && flag == 1){
            hour = s1[i];
            break;
        }
    }

    int minute = NULL;
    for (int i = 0; i < s3.length(); ++i){
        if (i >= s4.length()){
            break;
        }
        if (s3[i] == s4[i] && (s3[i] >= 'a' && s3[i] <= 'z'
            || s3[i] >= 'A' && s3[i] <= 'Z')){
            minute = i;
        }
    }

    switch (day){
    case 'A': cout << "MON "; break;
    case 'B': cout << "TUE "; break;
    case 'C': cout << "WED "; break;
    case 'D': cout << "THU "; break;
    case 'E': cout << "FRI "; break;
    case 'F': cout << "SAT "; break;
    case 'G': cout << "SUN "; break;
    default: cout << "NON "; break;
    }

    if (hour >= '0' && hour <= '9'){
        cout << "0" << hour << ":";
    }
    else if (hour >= 'A' && hour <= 'N'){
        cout << 10 + hour - 'A' << ":";
    }

    if (minute < 10){
        cout << "0" << minute;
    }
    else{
        cout << minute;
    }

    return 0;
}

