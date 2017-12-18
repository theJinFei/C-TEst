#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cin>>N>>c;
    if(N==1){
        cout<<c;
        return 0;
    }
    for(int i=0;i<N;i++){
        cout<<c;
    }
    cout<<endl;
    if(N!=3 && N%2!=0){
        N = N+1;
    }
    for(int i=0;i<N/2-2;i++){
        cout<<c;
        for(int j=0;j<N-1;j++){
            cout<<" ";
        }
        cout<<c;
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        cout<<c;
    }
    return 0;
}
