#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string> s1;
    set<string> s2;
    for(int i=0;i<n;i++){
        int  temp;
        cin>>temp;
        if(temp>=2){
            for(int j=0;j<temp;j++){
                string t;
                cin>>t;
                s1.insert(t);
            }
        }else {
            string t;
            cin>>t;
        }
    }
    int m;
    cin>>m;
    int flag=0;
    for(int i=0;i<m;i++){
        string t;
        cin>>t;
        if(s1.find(t)==s1.end()&&s2.find(t)==s2.end()){
            if(flag == 1)
                cout << " ";
            cout<<t;
            s2.insert(t);
            flag=1;
        }
    }
    if(flag==0){
        cout<<"No one is handsome";
    }
    return 0;
}
/**#include <iostream>
#include <set>
using namespace std;
int main() {
    int a, b, c;
    cin >> a;
    set<string> s, ans;
    string str;
    for(int i = 0; i < a; i++) {
        cin >> b;
        if(b >= 2) {
            for(int j = 0; j < b; j++) {
                cin >> str;
                s.insert(str);
            }
        } else {
            cin >> str;
        }
    }
    cin >> c;
    int flag = 0;
    for(int i = 0; i < c; i++) {
        cin >> str;
        if(s.find(str) == s.end() && ans.find(str) == ans.end()) {
            ans.insert(str);
            if(flag == 1)
                cout << " ";
            cout << str;
            flag = 1;
        }
    }
    if(flag == 0)
        cout << "No one is handsome";
    return 0;
}
*/
