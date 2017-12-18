#include <iostream>

using namespace std;
struct Student
{
    int sex;
    string name;
    int flag;
};
int main()
{
    int n;
    cin>>n;
    Student student[n];

    for(int i=0;i<n;i++){
        cin>>student[i].sex>>student[i].name;
        student[i].flag = 0;
    }
    for(int i=0;i<n/2;i++){
        int Firstsex = student[i].sex;
        for(int j=n;j>=0;j--){
            int Secondsex = student[j].sex;
            if(Firstsex != Secondsex && student[j].flag==0){
                cout<<student[i].name<<" "<<student[j].name<<endl;
                student[j].flag = 1;
                break;
            }
            else {
                continue;
            }
        }
    }
    return 0;
}
