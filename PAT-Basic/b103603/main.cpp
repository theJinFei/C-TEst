#include <iostream>

using namespace std;

int main()
{
    int N;
    char c;
    cin>>N>>c;
    for(int j=0;j<(N%2==0?N/2:(N+1)/2);j++){
        for(int i=0;i<N;i++){
            if(j==0 || j==(N-1)/2){
                cout<<c;
            }
            else {
                if(i==0 || i==N-1){
                    cout<<c;
                }else {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
