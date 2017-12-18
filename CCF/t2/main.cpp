//#include <iostream>
//#include <vector>
//using namespace std;
//const int MAX_NUM = 1000;
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> a(n+1);
//    for(int i = 1; i < n + 1; i++){
//        a[i] = i;
//    }
//    for(int i = 0; i < m; i++){
//        int temp1, temp2, pos ;
//        cin >> temp1 >> temp2;
//        if(temp2 > 0){
//            for(int j = 0; j < temp2; j++){
//                int t = a[pos];
//                a[pos] = a[pos + 1];
//                a[pos + 1] = t;
//                pos ++;
//            }
//        }else if(temp2 < 0){
//            for(int j = 0; j < -1 * temp2; j++){
//                int t = a[pos];
//                a[pos] = a[pos - 1];
//                a[pos - 1]  = t;
//                pos --;
//            }
//        }
//    }
//    for(int i = 1; i < n + 1; i++){
//        if(i != n){
//            cout << a[i] <<" ";
//        }else {
//            cout << a[i];
//        }
//
//    }
//    return 0;
//}        for(int k = 1; k < n + 1; k++){
//            if(a[k] == temp1){
//                pos = k;
//                break;
//            }
//        }
//        if(temp2 > 0){
//            for(int j = 0; j < temp2; j++){
//                int t = a[pos];
//                a[pos] = a[pos + 1];
//                a[pos + 1] = t;
//                pos ++;
//            }
//        }else if(temp2 < 0){
//            for(int j = 0; j < -1 * temp2; j++){
//                int t = a[pos];
//                a[pos] = a[pos - 1];
//                a[pos - 1]  = t;
//                pos --;
//            }
//        }
//    }
//    for(int i = 1; i < n + 1; i++){
//        if(i != n){
//            cout << a[i] <<" ";
//        }else {
//            cout << a[i];
//        }
//
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v1;
    int n, m;
    cin >> n >> m;
    v1.clear();
    for(int i = 1; i <= n; i++){
        v1.push_back(i);
    }
    for(int i = 0; i < m; i++){
        int temp1,temp2;
        cin >> temp1 >> temp2;
        vector<int>::iterator pos = find(v1.begin(), v1.end(), temp1);
        v1.erase(pos);
        v1.insert(pos + temp2, temp1);
    }
    cout << v1[0] ;
    for(int i = 1; i < n; i++){
        cout << " " <<v1[i];
    }
}

















