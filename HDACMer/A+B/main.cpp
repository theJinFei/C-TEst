#include <iostream>

using namespace std;
//while( scanf("%d%d",&a, &b) != EOF )
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N,temp;
        int sum = 0;
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>temp;
            sum += temp;
        }
        if(i<=t-2)
            cout<<sum<<endl<<endl;
        else {
            cout<<sum<<endl;
        }
    }
    return 0;
}
