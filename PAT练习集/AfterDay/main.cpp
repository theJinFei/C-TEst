#include <iostream>
#include <cmath>
using namespace std;
bool isSushu(int num);
int main()
{
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(isSushu(temp))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
bool isSushu(int num)
{
    if(num==1){
        return false;
    }
    bool flag = true;
    for(int i=2;i<=(int)sqrt(num);i++){
        if(num%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}
