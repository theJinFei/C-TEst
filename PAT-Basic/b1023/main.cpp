#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int>::iterator iter;
    int temp;
    for(int i=0;i<10;i++){
        cin>>temp;
        for(int j=0;j<temp;j++)
            v1.push_back(i);
    }
    sort(v1.begin(),v1.end());

    for(iter=v1.begin();iter!=v1.end();iter++){
        if(*iter!=0){
            temp=*iter;
            *iter=v1[0];
            v1[0]=temp;
            break;
        }
    }
    for(iter=v1.begin();iter!=v1.end();iter++){
        cout<<*iter;
    }
    return 0;
}
