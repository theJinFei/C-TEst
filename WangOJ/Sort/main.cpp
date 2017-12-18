#include <iostream>
#include <algorithm>
using namespace std;
int Partition(int a[], int low, int high)
{
    int pivot = a[low];
    while(low < high){
        while(low < high && a[high] >= pivot){
            high--;
        }
        a[low] = a[high];
        while(low < high && a[low] <= pivot){
            low++;
        }
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}
void Quick_Sort(int a[], int begin, int end)
{
    if(begin >= end){
        return ;
    }
    int pivot = Partition(a, begin, end);
    Partition(a, begin, pivot - 1);
    Partition(a, pivot + 1, end);

}
bool cmp(int a,int b)
{
    return a < b;
}
int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //Quick_Sort(a, 0, n);
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
}
