#include <iostream>
#include <cmath>
using namespace std;
int funtoNum(int A,int DA);
struct Number
{
    int A;
    int DA;
};
int main()
{
    Number number[2];
    cin>>number[0].A>>number[0].DA>>number[1].A>>number[1].DA;
    int m=0,n=0;
    n = funtoNum(number[0].A,number[0].DA);
    m = funtoNum(number[1].A,number[1].DA);
    cout<<m+n<<endl;
    return 0;
}
int funtoNum(int A,int DA)
{
    int t = 0;
    int i=0;
    while(A!=0){
        int yushu = A%10;
        if(yushu==DA){
            t+=yushu*pow(10,i);
            i++;
        }
        A = A/10;
    }
    return t;
}
