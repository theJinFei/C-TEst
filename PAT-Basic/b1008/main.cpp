#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(m==0){
        cout<<a[0];
        for(int i=1;i<n;i++){
            cout<<" "<<a[i];
        }
    return 0;
    }
    vector<int> v1;
    for(int j=n-m;j<n;j++){
        v1.push_back(a[j]);
    }
    cout<<v1[0];
    for(int i=1;i<v1.size();i++){
        cout<<" "<<v1[i];
    }
    for(int i=0;i<n-m;i++){
        cout<<" "<<a[i];
    }
    return 0;
}
