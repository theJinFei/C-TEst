#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int Binary_Search(int data[], int number)
{
    int low = 0,high = sizeof(data)-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(data[mid] > number){
            high = mid - 1;
        }else if(data[mid] < number){
            low = mid +1;
        }else if(data[mid] == number){
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int a[n];
        for(int i = 0; i < n; i++){
//            int temp;
            scanf("%d",&a[i]);
        }
        int number;
        cin >> number;
        int pos = Binary_Search(a, number);
        cout << pos <<endl;
    }
    return 0;
}
