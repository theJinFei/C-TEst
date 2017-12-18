#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
    int Fenzi;
    int Fenmu;
};
int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b, a%b);
}
int main()
{
    int n;
    cin>>n;
    Node node[n];
    long long sum = 1;
    for(int i = 0; i < n; i++){
        //cin >> node[i].Fenzi >> node[i].Fenmu;
        scanf("%d/%d",&node[i].Fenzi,&node[i].Fenmu);
        sum *= node[i].Fenmu;
    }
    for(int i = 0; i < n; i++){
        node[i].Fenzi *= (sum / node[i].Fenmu);
    }
    int result = 0;
    for(int i = 0; i < n; i++){
        result += node[i].Fenzi;
    }
    if(sum != 0){
        if(result > sum && result % sum != 0){
            cout << result / sum <<" ";
            int temp1 = (result - result / sum * sum) ;
            int temp2 = sum;
            int temp3 = gcd(temp1,temp2);
            cout << temp1 / temp3 << "/" << temp2 / temp3 << endl;
        }else if(result > sum && result % sum == 0){
            cout << result / sum <<endl;
        }else {
            int temp = gcd(result,sum);
            cout << result / temp << "/" << sum / temp << endl;
        }
    }else cout << "0" <<endl;

    return 0;
}
