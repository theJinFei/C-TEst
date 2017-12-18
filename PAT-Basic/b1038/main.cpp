#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[101]={0};
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a[temp]++;
    }
    cin>>m;
    cin>>temp;
    cout<<a[temp];
    for(int i=1;i<m;i++){
        cin>>temp;
        cout<<" "<<a[temp];
    }
    return 0;
}
