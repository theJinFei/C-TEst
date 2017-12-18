#include <iostream>

using namespace std;

struct Student
{
    string Idcard;
    int shiji;
    int kaoshi;
};
int main()
{
    int n;
    cin>>n;
    Student student[n];
    for(int i=0;i<n;i++){
        cin>>student[i].Idcard>>student[i].shiji>>student[i].kaoshi;
    }
    int m;
    cin>>m;
    int temp;
    for(int i=0;i<m;i++){
        cin>>temp;
        for(int i=0;i<n;i++){
            if(temp==student[i].shiji){
                cout<<student[i].Idcard<<" "<<student[i].kaoshi<<endl;
            }
        }
    }
    return 0;
}
