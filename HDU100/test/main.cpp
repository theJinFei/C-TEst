//#include <iostream>
//#include <cmath>
//#include <stdio.h>
//#define MAX_N 10001
//using namespace std;
//
//int is_Prime[MAX_N];
//void Sieve()
//{
//    for(int i = 0; i <= MAX_N; i++){
//        is_Prime[i] = 1;
//    }
//    is_Prime[0] = is_Prime[1] = 0;
//    for(int i = 2; i <= MAX_N; i++){
//        if(is_Prime[i]){
//            for(int j = 2 * i; j <= MAX_N; j += i){
//                is_Prime[j] = 0;
//            }
//        }
//    }
//}
////对于字符a输入输出：
////1）当用scanf(),printf()来对a进行输入输出时，a的输入用:%s,
////输出只能用%c;
////否则就会有问题。
//int main()
//{
//    //int n;
//    //Sieve();
//    char c;
//    int n;
//    while(cin >> c){
//        if(c == '@') break;
//        cin >> n;
//        char arr[n][2 * n - 1] = {' '};
//        //arr[0][n - 1] = c;
//        arr[0][n - 1] = c;
//        for(int i = 1; i < n; i++){
//            arr[i][n - i - 1] = c;
//            arr[i][n + i - 1] = c;
//        }
//        for(int i = 0; i < 2 * n - 1; i++){
//            arr[n-1][i] = c;
//        }
//        for(int i = 0; i < n; i++){
//            for(int j = 0; j < 2 * n - 1; j++){
//                cout << arr[i][j];
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}


