#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
bool cmp(pair<int, double> a, pair<int, double> b)
{
    return a.first >= b.first;
}
int main()
{
    int n;
    cin >> n;
    map<int, double> mapp;
    for(int i = 0; i < n; i++){
        int exp;
        double coef;
        cin >> exp >> coef;
        mapp[exp] = coef;
    }
    int m;
    cin >> m;
    for(int i = 0; i < n; i++){
        int exp;
        double coef;
        cin >> exp >> coef;
        mapp[exp] = mapp[exp] + coef;
    }
    vector<pair<int,double> > vec(mapp.begin(), mapp.end());
    sort(vec.begin(),vec.end(),cmp);
    cout << vec.size() << " ";
    for(int i = 0; i < vec.size(); i++){
        if(i != vec.size() - 1)
            //cout << vec[i].first << " " <<vec[i].second<< " ";
            printf("%d %.1f ",vec[i].first, vec[i].second);
        else {
            //cout << vec[i].first << " " <<vec[i].second;
            printf("%d %.1f",vec[i].first, vec[i].second);
        }
    }
    //sort(mapp.begin(),mapp.end(),cmp);
    return 0;
}
