#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m,jinzhi;
    cin>>n>>m>>jinzhi;
    int sum = n+m;
    if(sum==0){
        cout<<"0"<<endl;
        return 0;
    }
    vector<int> v1;
    while(sum!=0){
        int yushu = sum%jinzhi;
        v1.push_back(yushu);
        sum = sum/jinzhi;
    }
    for(int i=v1.size()-1;i>=0;i--){
        cout<<v1[i];
    }

    return 0;
}
