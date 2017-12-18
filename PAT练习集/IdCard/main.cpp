#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> str;
    vector<int> sumAll;
    //char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    string m="10X98765432";
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        str.push_back(temp);
    }
    for(int i=0;i<n;i++){
        string temp = str[i];
        int sum = 0;
        if(temp[0]>='0'&&temp[0]<='9'){
            sum += (temp[0]-'0')*7;
        }
         if(temp[1]>='0'&&temp[1]<='9'){
        sum += (temp[1]-'0')*9;
         }
         if(temp[2]>='0'&&temp[2]<='9'){
        sum += (temp[2]-'0')*10;
         }
         if(temp[3]>='0'&&temp[3]<='9'){
        sum += (temp[3]-'0')*5;
         }
         if(temp[4]>='0'&&temp[4]<='9'){
        sum += (temp[4]-'0')*8;
         }
         if(temp[5]>='0'&&temp[5]<='9'){
        sum += (temp[5]-'0')*4;
         }
         if(temp[6]>='0'&&temp[6]<='9'){
        sum += (temp[6]-'0')*2;
         }
         if(temp[7]>='0'&&temp[7]<='9'){
        sum += (temp[7]-'0')*1;
         }
         if(temp[8]>='0'&&temp[8]<='9'){
        sum += (temp[8]-'0')*6;
         }

         if(temp[9]>='0'&&temp[9]<='9'){
        sum += (temp[9]-'0')*3;
         }
         if(temp[10]>='0'&&temp[10]<='9'){
        sum += (temp[10]-'0')*7;
         }
         if(temp[11]>='0'&&temp[11]<='9'){
        sum += (temp[11]-'0')*9;
         }
         if(temp[12]>='0'&&temp[12]<='9'){
        sum += (temp[12]-'0')*10;
         }
         if(temp[13]>='0'&&temp[13]<='9'){
        sum += (temp[13]-'0')*5;
         }
         if(temp[14]>='0'&&temp[14]<='9'){
        sum += (temp[14]-'0')*8;
         }
         if(temp[15]>='0'&&temp[15]<='9'){
        sum += (temp[15]-'0')*4;
         }
         if(temp[16]>='0'&&temp[16]<='9'){
        sum += (temp[16]-'0')*2;
         }
        //cout<<sum<<endl;
        sumAll.push_back(sum);
    }
    bool isAll = true;
    for(int i=0;i<n;i++){
        string temp = str[i];
        int sum = sumAll[i];
        //cout<<"sum%11:"<<sum%11<<endl;
        //cout<<"M[sum%11]:"<<m[sum%11]<<endl;

        if(m[sum%11] != temp[17]){
            isAll = false;
            cout<<temp<<endl;
        }

    }
    if(isAll){
        cout<<"All passed"<<endl;
    }

    return 0;
}
