#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
#include <algorithm>
using namespace std;
int StirngtoInt(string str)
{
    int sum=0;
    for(int i=str.size()-1,j=0;i>=0;i--,j++){
        sum+=pow(10,j)*(str[i]-'0');
    }
    return sum;
}
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int N;
    cin>>N;
    int a[10001]={0};

    for(int i=0;i<N;i++){
        string str;
        int Grade;
        cin>>str>>Grade;
        for(int j=0;j<str.size();j++){
            if(str[j]=='-'){
                string temp = str.substr(0,j);
                int Bianhao = StirngtoInt(temp);
                a[Bianhao]+=Grade;
                break;
            }
        }
    }
    int max = 0;
    int Position = 0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        if(a[i]>max){
            max = a[i];
            Position = i;
        }
    }
    cout<<Position<<" "<<max<<endl;
    return 0;
}
