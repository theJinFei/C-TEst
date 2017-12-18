#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        cout<<"Case #"<<i+1<<": ";
        if(a+b>c){
            cout<<"true";
        }
        else {
            cout<<"false";
        }
        cout<<endl;
    }
    return 0;
}
