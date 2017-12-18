#include <iostream>

using namespace std;
void ShellSort(int data[], int increments[], int n, int incrementsLength)
{
    int i, j, k;
    int temp;
    for(k = 0; k < incrementsLength; k++){
        for(i = increments[k]; i < n; i++){
            temp = data[i];
            for(j = i; j >= increments[k]; j -= increments[k]){
                if(temp >= data[j - increments[k]])
                    break;
                data[j] = data[j - increments[k]];
            }
            data[j] = temp;
        }
    }

}
int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int increments[3] = {5, 3, 1};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ShellSort(a, increments, n, 3);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
