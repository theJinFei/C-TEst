#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Student
{
    string name;
    int age;
    int grade;
    bool operator < (const Student &b){
        if(b.grade != grade){
            return grade < b.grade;
        }else if(b.name != name){
            return name < b.name;
        }else {
            return age < b.age;
        }
    }

};
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        Student student[n];
        for(int i = 0; i < n; i++){
            scanf("%s %d %d",&student[i].name,&student[i].age,&student[i].grade);
        }
        sort(student, student + n);
        for(int i = 0; i < n; i++){
            printf("%s %d %d\n",student[i].name,student[i].age,student[i].grade);
        }
    }
    return 0;
}
