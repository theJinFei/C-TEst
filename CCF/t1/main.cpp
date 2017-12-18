#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(int i = 0; i < v1.size();){
        if(v1[i] >= k || (i == v1.size()-1 && v1[i] < k)){
            ans ++;
            i ++;
        }else {
            int temp = 0;
            temp = v1[i];
            ++i;
            v1[i] = temp + v1[i];
            continue;

        }
    }
    cout << ans <<endl;
    return 0;
}
