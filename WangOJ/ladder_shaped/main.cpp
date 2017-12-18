#include <iostream>

using namespace std;

int main()
{
    int h;
    cin >> h;
    int maxLineNumber = h + (h - 1) * 2;
    for(int i = 1; i <= h; i++){
        for(int j = maxLineNumber - h - (i - 1) * 2; j >= 1; j--){
            cout << " ";
        }
        for(int j = 1; j <= h + (i - 1) * 2; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
