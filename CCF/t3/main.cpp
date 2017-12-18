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
#include <map>
using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        v1.push_back(t);
    }
    sort(v1.begin(), v1.end());
    int mid;
    if(v1.size() % 2 ==0){
        mid = v1.size() / 2 - 1 ;
    }else {
        mid = v1.size() / 2;
    }

    int right = 0, left = 0;
    for(int i = 0; i < mid; i++){
        if(v1[i] < v1[mid]){
            left ++;
        }
    }
    for(int j = mid + 1; j < v1.size() ; j++){
        if(v1[j] > v1[mid]){
            right++;
        }
    }
    if(left == right){
        cout << v1[mid];
    }else {
        cout << "-1" ;
    }

    return 0;
}
