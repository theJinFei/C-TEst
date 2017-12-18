#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a<b;
}
int main()
{
    int n;
    vector<int> v1;
    vector<int>::iterator iter;
    cin>>n;
    while(n!=6174){
        while(n!=0){
            v1.push_back(n%10);
            n=n/10;
        }
        sort(v1.begin(),v1.end(),compare);

        int minNumber = v1[0]*1000+v1[1]*100+v1[2]*10+v1[3];
        int maxNumber = v1[0]+v1[1]*10+v1[2]*100+v1[3]*1000;
        if(maxNumber == minNumber){
            cout<<maxNumber<<" - "<<minNumber<<" = "<< "0000"<<endl;
            break;
        }
        if(minNumber>1000)
            cout<<maxNumber<<" - "<<minNumber<<" = "<< maxNumber-minNumber<<endl;
        else if(minNumber>100)
            cout<<maxNumber<<" - 0"<<minNumber<<" = "<< maxNumber-minNumber<<endl;
        else if(minNumber>10)
            cout<<maxNumber<<" - 00"<<minNumber<<" = "<< maxNumber-minNumber<<endl;
        else if(minNumber>1)
            cout<<maxNumber<<" - 000"<<minNumber<<" = "<< maxNumber-minNumber<<endl;
        n = maxNumber-minNumber;
        v1.clear();
        //for(iter = v1.begin();iter!=v1.end();iter++){
          //  cout<<*iter<<" ";
        //}
    }

    return 0;
}
