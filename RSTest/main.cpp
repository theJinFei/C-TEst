#include <iostream>
#include <vector>
using namespace std;
//想实现 将伽罗华域映射为柯西矩阵
//最后寻找最优的柯西矩阵使总的运算量 最小
//先生成伽罗华的加和乘的规则
const vector<vector<int> > add_v = {
    {0, 1, 2, 3, 4, 5, 6, 7},
    {1, 0, 3, 2, 5, 4, 7, 6},
    {2, 3, 0, 1, 6, 7, 4, 5},
    {3, 2, 1, 0, 7, 6, 5, 4},
    {4, 5, 6, 7, 0, 1, 2, 3},
    {5, 4, 7, 6, 1, 0, 3, 2},
    {6, 7, 4, 5, 2, 3, 0, 1},
    {7, 6, 5, 4, 3, 2, 1, 0}
};
const vector<vector<int> > multi_v = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 2, 3, 4, 5, 6, 7},
    {0, 2, 4, 6, 3, 1, 7, 5},
    {0, 3, 6, 5, 7, 4, 1, 2},
    {0, 4, 3, 7, 6, 2, 5, 1},
    {0, 5, 1, 4, 2, 7, 3, 6},
    {0, 6, 7, 1, 5, 3, 2, 4},
    {0, 7, 5, 2, 1, 6, 4, 3}
};

//GF(2^3)生成矩阵
const vector<vector<int> >  GenerMatix = {
    {1, 0, 0, 6, 1, 6, 7},
    {0, 1, 0, 4, 1, 5, 5},
    {0, 0, 1, 3, 1, 2, 3}
};
//GF(2^3)的校验矩阵
const vector<vector<int> > HMatix = {
    {6, 4, 3, 1, 0, 0, 0},
    {1, 1, 1, 0, 1, 0, 0},
    {6, 5, 2, 0, 0, 1, 0},
    {7, 5, 3, 0, 0, 0, 1}
};
const vector<int> before_M = {6, 5, 4};
const int size_n = 7;
const int size_r = 3;
vector<int> after_M;
//int main()
//{
//    for(int i = 0; i < size_n; i++){
//        vector<int> temp;
//        int ans = 0;
//        for(int j = 0;  j < size_r; j++){
//            temp.push_back(multi_v[before_M[j]][GenerMatix[j][i]]);
//        }
////        for(int j = 0; j < temp.size(); j++){
////            cout << temp[j] << " ";
////        }
////        cout << endl;
//        for(int j = 0; j < temp.size() - 1; j++){
//            temp[j+1] = add_v[temp[j]][temp[j+1]];
//        }
//        after_M.push_back(*(temp.end() - 1));
//    }
//    cout << "编码后的结果为：" << endl;
//    for(int i = 0; i < after_M.size(); i++){
//        cout << after_M[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
