#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string strA,strB;
    cin>>strA>>strB;
    vector<char> v1;
    vector<char>::iterator iter;
    for(int i=0,j=1;i<strB.size()&&j<strA.size()&&j<strB.size();i++,j++){
        if(j%2!=0){
            int sum = (strB[strB.size()-i-1]-'0'+strA[strA.size()-i-1]-'0')%13;
            if(sum<10){
                v1.push_back(sum);
                continue;
            }
            switch(sum){
            case 10:v1.push_back('J');break;
            case 11:v1.push_back('Q');break;
            case 12:v1.push_back('K');break;
            default :continue;
            }
        }else {
            int sum = (strB[strB.size()-i-1]-strA[strA.size()-i-1]);
            if(sum<0){
                sum+=10;
            }
            v1.push_back(sum);
        }
    }
    for(iter=v1.begin();iter!=v1.end();iter++){
        cout<<*iter<<" ";
    }
    return 0;
}
