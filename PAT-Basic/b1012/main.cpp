#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void fun1(int a[]){
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fun1(a);
    int A1=0,A2=0,A3=0,A4=0,A5=0;
    float numTemp=0;
    int max = 0;
    int t=0;
    bool isleagl1 = false;
    bool isleagl2 = false;
    bool isleagl3 = false;
    bool isleagl4 = false;
    bool isleagl5 = false;
    for(int i=0;i<n;i++){
        if(a[i]%5==0&&a[i]%2==0){
            A1+=a[i];
            isleagl1 = true;
            continue;
        }
        if(a[i]%5==1){
            A2+=a[i]*pow(-1,t);
            t++;
            isleagl2 = true;
            continue;
        }
        if(a[i]%5==2){
            A3++;
            isleagl3 = true;
            continue;
        }
        if(a[i]%5==3){
            numTemp++;
            A4+=a[i];
            isleagl4 = true;
            continue;
        }
        if(a[i]%5==4&&a[i]>max){
            isleagl5 = true;
            max=a[i];
        }
    }
    if(isleagl1){
        cout<<A1<<" ";
    }
    else
        cout<<"N ";
    if(isleagl2){
        cout<<A2<<" ";
    }
    else
        cout<<"N ";
    if(isleagl3){
        cout<<A3<<" ";
    }
    else
        cout<<"N ";
    if(isleagl4){
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<A4/numTemp<<" ";
    }
    else
        cout<<"N ";
    if(isleagl5){
        cout<<max<<"";
    }
    else
        cout<<"N";

    //cout<<A1<<" "<<A2<<" "<<A3<<" "<<A4/numTemp<<" "<<max;
    return 0;
}
