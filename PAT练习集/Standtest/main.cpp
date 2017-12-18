#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int sum=0;
    int t=1;
    for(int i=m;i<=n;i++){
        cout<<setiosflags(ios::right)<<setw(5)<<i;
        sum+=i;
        //×¢ÒâÕâµã
        if(t%5==0){
            cout<<endl;
        }
        else if(i==n){
            cout<<endl;
        }
        t++;

    }

    cout<<"Sum = "<<sum<<endl;
    return 0;
}
