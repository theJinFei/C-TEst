#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    char ch;
    while(n--){
        //string temp;
        //getline(cin,temp);
        stack<char> s1;
        while(1){
            ch = getchar();
            if(ch==' '||ch=='\n'||ch==EOF){
                while(!s1.empty()){
                    cout<<s1.top();
                    s1.pop();
                }
                if(ch=='\n'||ch==EOF){
                    break;
                }
                cout<<" ";
            }else {
                s1.push(ch);
            }
        }
        cout<<endl;
    }
    return 0;
}
