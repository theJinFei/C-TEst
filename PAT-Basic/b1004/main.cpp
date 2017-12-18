#include <iostream>

using namespace std;
struct Student
{
    string name;
    string Id;
    int grade;
    int flag;
};
int main()
{
    int n;
    cin>>n;
    Student student[n];
    int max = 0;
    int min = 100;
    for(int i=0;i<n;i++){
        cin>>student[i].name>>student[i].Id>>student[i].grade;
        student[i].flag = 0;
        if(student[i].grade > max){
            max = student[i].grade;
        }
        if(student[i].grade < min){
            min = student[i].grade;
        }
    }
    for(int i=0;i<n;i++){
        if(student[i].grade==max){
            cout<<student[i].name<<" "<<student[i].Id<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if(student[i].grade==min){
            cout<<student[i].name<<" "<<student[i].Id<<endl;
        }
    }


    return 0;
}
