#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <set>
using namespace std;

int main()
{

    int N;
    cin>>N;
    set<int> s[N];
    set<int>::iterator pos1;
    set<int>::iterator pos2;
    for(int i=0;i<N;i++){
        int size;
        cin>>size;
        for(int j=0;j<size;j++){
            int temp;
            cin>>temp;
            if(!s[i].count(temp)){
                s[i].insert(temp);
            }
        }
    }
    int M;
    cin>>M;
    for(int i=0;i<M;i++){
        double Nc=0,Nt=0;
        int a,b;
        cin>>a>>b;
        Nt = s[a-1].size();
        for(pos2=s[b-1].begin();pos2!=s[b-1].end();pos2++){
            if(s[a-1].find(*pos2)==s[a-1].end()){
               Nt++;
            }else {
                Nc++;
            }
        }
        printf("%.2f%%",Nc/Nt*100);
    }
    return 0;
}
