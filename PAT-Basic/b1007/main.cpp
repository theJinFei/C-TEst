#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isPrime(int num);
int main()
{
    vector<int> v1;
    vector<int>::iterator iter;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            v1.push_back(i);
        }
    }
    int t = 0;
    for(int i=0;i<v1.size();i++){
        if(v1[i+1]-v1[i]==2){
            t++;
        }
    }
    cout<<t;
    return 0;
}
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
