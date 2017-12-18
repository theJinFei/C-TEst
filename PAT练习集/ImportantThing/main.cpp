#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int count = 0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        cin>>a[i];
        if(a[i]%2==0){
            count++;
        }
    }
    cout<<n-count<<" "<<count<<endl;


    return 0;
}
