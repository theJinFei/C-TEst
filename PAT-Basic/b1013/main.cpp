#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool fun(int n);
int main()
{
    vector<int> v1;
    for(int i=2;i<=10000;i++){
        if(fun(i)){
            v1.push_back(i);
            //cout<<i<<" ";
        }
    }
    int n,m;
    cin>>n>>m;
    int t=1;
    for(int i=n-1;i<m;i++){
        t++;
        if(t==2){
            cout<<v1[i];
            continue;
        }
        cout<<" "<<v1[i];
        if(t%11==0){
            cout<<endl;
            t=1;
        }

    }

    return 0;
}
bool fun(int n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
