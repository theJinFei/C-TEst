#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> s;
    string str;
    while(cin>>str){
        s.push(str);
    }
    cout<<s.top();
    s.pop();
    while(!s.empty()){
        cout<<" "<<s.top();
        s.pop();
    }
    return 0;
}
