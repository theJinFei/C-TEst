#include <iostream>

using namespace std;
struct People
{
    int Number;
    bool isCheck;
};
int main()
{
    int n;
    cin>>n;
    People people[n];
    for(int i=0;i<n;i++){
        cin>>people[i].Number;
        people[i].isCheck = false;
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int temp ;
        cin>>temp;

    }

    return 0;
}
