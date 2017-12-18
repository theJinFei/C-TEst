#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int k = 1;
    while(scanf("%d",&n)!=EOF && n){
        vector<int> v1;
        int sum = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum += temp;
            v1.push_back(temp);
        }
        int average = sum/n;
        int result = 0;
        for(int i=0;i<v1.size();i++){
            result += abs(v1[i]-average);
        }
        cout<<"Set #"<<k<<endl;
        cout<<"The minimum number of moves is "<<result/2<<"."<<endl<<endl;
        k++;
    }

    return 0;
}
