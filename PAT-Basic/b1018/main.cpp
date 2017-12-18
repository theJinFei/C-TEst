#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int Win=0,Ping=0;
    int JiaC=0,JiaB=0,JiaJ=0;
    int YiC=0,YiB=0,YiJ=0;
    for(int i=0;i<N;i++){
        char a,b;
        cin>>a>>b;
        if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){
            Win++;
            if(a=='C'&&b=='J'){
                JiaC++;
            }else if(a=='J'&&b=='B'){
                JiaJ++;
            }else {
                JiaB++;
            }
        }
        else if(a==b){
            Ping++;
        }else {
            if(a=='C'&&b=='B'){
                YiB++;
            }else if(a=='J'&&b=='C'){
                YiC++;
            }else {
                YiJ++;
            }
        }
    }
    cout<<Win<<" "<<Ping<<" "<<N-Win-Ping<<endl;
    cout<<N-Win-Ping<<" "<<Ping<<" "<<Win<<endl;
    //cout<<JiaC<<" "<<JiaB<<" "<<JiaJ<<endl;
    if(JiaC>=JiaJ&&JiaC>JiaB){
        cout<<"C"<<" ";
    }
    else if(JiaJ>JiaC&&JiaJ>JiaB){
        cout<<"J"<<" ";
    }
    else if(JiaB>=JiaJ&&JiaB>=JiaC){
        cout<<"B"<<" ";
    }

    if(YiC>=YiJ&&YiC>YiB){
        cout<<"C";
    }
    else if(YiJ>YiC&&YiJ>YiB){
        cout<<"J";
    }
    else if(YiB>=YiC&&YiB>=YiJ){
        cout<<"B";
    }
    return 0;
}
