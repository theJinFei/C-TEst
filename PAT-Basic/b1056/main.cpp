#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int shiwei = a[i]*10;
            for(int j=0;j<n;j++){
                if(j!=i && a[j]!=0){
                    sum += shiwei+a[j];
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
