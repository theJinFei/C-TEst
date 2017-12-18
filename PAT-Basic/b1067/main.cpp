#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    //set<string> s1;
    string temp;
    int n,cnt=0;
    string Password;
    cin>>Password>>n;
    getchar();
    while(1){
        getline(cin,temp);
        if(temp!="#"){
            cnt++;
        }else break;
        if(temp==Password && cnt<=n){
            cout << "Welcome in";
            break;
        }else if(cnt<=n && temp!=Password){
            cout<<"Wrong password: "<<temp<<endl;
            if(cnt==n){
                cout<<"Account locked";break;
            }
        }
    }
    /*s1.insert(Password);

    string temp;
    int i=0;
    while(getline(cin,temp) && temp!="#"){
        if(s1.find(temp)==s1.end()){
            i++;
            cout<<"Wrong password: "<<temp<<endl;
            if(i==n){
            cout<<"Account locked";break;
            }

        }else if(s1.find(temp)!=s1.end()){
            cout<<"Welcome in";break;
        }
    }*/

    return 0;
}
