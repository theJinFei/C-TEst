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
bool isPrime(int a)
{
    if(a<=1){
        return false;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int N,K;
    cin>>N;
    set<int> s1;
    vector<int> v1;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    cin>>K;
    for(int i=0;i<K;i++){
        int temp;
        cin>>temp;
        if(s1.find(temp)==s1.end()){
            if(temp==v1[0]){
                printf("%04d: Mystery Award\n",temp);
                s1.insert(temp);
            }else {
                int isIn = 0;
                for(int j=1;j<v1.size();j++){
                    if(v1[j]==temp){
                        isIn = 1;
                        if(isPrime(j+1)){
                            printf("%04d: Minion\n",temp);
                            s1.insert(temp);
                            break;
                        }else {
                            printf("%04d: Chocolate\n",temp);
                            s1.insert(temp);
                            break;
                        }
                    }
                }
                if(!isIn){
                    printf("%04d: Are you kidding?\n",temp);
                }
            }
        }else {
            printf("%04d: Checked\n",temp);
        }

    }
    return 0;
}
