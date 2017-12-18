#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=100&&n<1000){
        int bai = n/100;
        for(int i=0;i<bai;i++)
            cout<<"B";
        int shi = n/10%10;
        for(int i=0;i<shi;i++)
            cout<<"S";
        int ge = n%10;
            if(ge!=0){
                for(int i=1;i<=ge;i++){
                    cout<<i;
                }
            }
    }else if(n>=10&&n<100){
        int shi = n/10;
        for(int i=0;i<shi;i++){
            cout<<"S";
        }
        int ge = n%10;
        if(ge!=0){
            for(int i=1;i<=ge;i++){
                cout<<i;
            }
        }
    }else {
        int ge = n%10;
        if(ge!=0){
            for(int i=1;i<=ge;i++){
                cout<<i;
            }
        }

    }
    return 0;
}
