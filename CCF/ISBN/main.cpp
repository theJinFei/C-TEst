#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<int> v1;
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] >= '0' && str[i] <= '9')
            v1.push_back(str[i] - '0');
    }
    long long  sum = 0;
    for(int i = 0,j = 1; i < v1.size(); i++,j++){
        sum += v1[i] * j;
    }
    int temp = sum % 11;
    if(temp == 10 && str[str.size() - 1] == 'X'){
        cout << "Right";
    }
    if(temp < 10 && temp == (str[str.size() - 1] - '0')){
        cout << "Right";
    }
    if((temp == 10 && str[str.size() - 1] != 'X') || (temp < 10 && temp != (str[str.size() - 1] - '0'))){
        for(int i = 0; i < str.size() -1; i++){
            cout << str[i];
        }
        if(temp != 10){
            cout << temp;
        }else {
            cout << "X";
        }

    }
    return 0;
}
