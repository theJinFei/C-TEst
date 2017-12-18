#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cin>>N>>c;
    for(int i=0;i<N/2;i++){
        if(N%2!=0){
            N = N +1;
        }
            if(i==0||i==N/2-1){
        for(int j=0;j<N;j++){
            cout<<c;
            }
        cout<<endl;
            }
            else {
                cout<<c;
                for(int i=0;i<N-2;i++)
                    cout<<" ";
                cout<<c<<endl;
                }
        }
    return 0;
}
