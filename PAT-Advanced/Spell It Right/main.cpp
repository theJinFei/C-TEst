#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string N;
    cin>>N;
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int sum = 0;
    vector<string> v1;
    for(int i=0;i<N.size();i++){
        sum+=N[i]-'0';
    }
    while(sum!=0){
        v1.push_back(str[sum%10]);
        sum = sum/10;
    }
    if(v1.size()==0){
        cout<<str[0];
        return 0;
    }
    reverse(v1.begin(),v1.end());
    cout<<v1[0];
    for(int i=1;i<v1.size();i++){
        cout<<" "<<v1[i];
    }
    return 0;
}
