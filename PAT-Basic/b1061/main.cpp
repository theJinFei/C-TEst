#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int fenzhi[m];
    for(int i=0;i<m;i++){
        cin>>fenzhi[i];
    }
    int zhengque[m];
    for(int i=0;i<m;i++){
        cin>>zhengque[i];
    }
    int kaosheng[m];
    vector<int> fenshu;

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cin>>kaosheng[i];
        }
        int sum=0;
        for(int i=0;i<m;i++){
            if(kaosheng[i]==zhengque[i])
                sum+=fenzhi[i];
        }
        fenshu.push_back(sum);
    }
    for(int i=0;i<fenshu.size();i++){
        cout<<fenshu[i]<<endl;
    }
    return 0;
}
