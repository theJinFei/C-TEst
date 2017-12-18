#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> mapp;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        mapp[temp]++ ;
    }
    int max = 0, ans = 0;
    for(map<int,int>::iterator iter = mapp.begin(); iter != mapp.end(); iter++){
        if(iter -> second > max){
            max = iter -> second;
            ans = iter -> first;
        }
    }
    cout << ans <<endl;
    return 0;
}
