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
    int N;
    cin>>N;
    //vector<int> v1;
    int temp;
    set<int> v2;
    set<int>::iterator iter;
    vector<int> v3;
    int t = 0;
    for(int i=0;i<N;i++){
        cin>>temp;
        int sum = 0;
        while(temp!=0){
            int yushu = temp%10;
            sum += yushu;
            temp= temp/10;
        }
        if(v2.find(sum)==v2.end()){
            v2.insert(sum);
            //cout<<sum<<" ";
            t++;
        }

    }
    cout<<t<<endl;
    iter = v2.begin();
    cout<<*iter;
    for(iter++;iter!=v2.end();iter++){
        cout<<" "<<*iter;
    }
    //sort(v2.begin(),v2.end());
    return 0;
}
