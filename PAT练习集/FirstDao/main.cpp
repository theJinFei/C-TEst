#include <iostream>

using namespace std;
int fun(int a1,int a2,int b1,int b2);
int main()
{
    int m,n;
    cin>>m>>n;
    int t;
    cin>>t;
    int a1,a2,b1,b2;
    int A1=0,B1=0;
    for(int i=0;i<t;i++){
        cin>>a1>>a2>>b1>>b2;
        int temp = fun(a1,a2,b1,b2);
        if(temp==1){
            m--;
            ++A1;
            if(m<0){
                cout<<"A"<<endl;
                cout<<B1<<endl;
                 break;
            }

        }else if(temp==-1){
            n--;
            ++B1;
            if(n<0){
                cout<<"B"<<endl;
                cout<<A1<<endl;
                 break;
            }
        }else if(temp==2){
            continue;
        }
        else
            continue;
    }
    return 0;
}
int fun(int a1,int a2,int b1,int b2)
{
    if(a2==(a1+b1)&&b2!=(a1+b1)){
        return 1;
    }
    else if(b2==(a1+b1)&&a2!=(a1+b1)){
        return -1;
    }
    else if(b2==(a1+b1)&& a2==(a1+b1)){
        return 2;
    }else return 0;
}
