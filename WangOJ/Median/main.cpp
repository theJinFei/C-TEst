#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <set>
#include <string>
#include <string.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<ll> v1;
    ll n,m;
    while(cin >> n){
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            ll temp;
            //scanf("%lld", &temp);
            cin >> temp;
            v1.push_back(temp);
        }
        //scanf("%ld",&m);
        cin >> m;
        for(int i = 0; i < m; i++){
            ll temp;
            //scanf("%lld", &temp);
            cin >> temp;
            v1.push_back(temp);
        }
        sort(v1.begin(),v1.end());
        cout << v1[v1.size()/2];
//        for(int i = 0; i < v1.size(); i++){
//            //printf("%lld", v1[i]);
//            cout << v1[i] <<" ";
//        }

    }
    return 0;
}
