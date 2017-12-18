#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> v1;
    string str;
    //getchar();
    while(cin >> str){
        if(str == ".")break;
        v1.push_back(str);
    }
    if(v1.size() <= 1){
        cout << "Momo... No one is for you ..." <<endl;
    }else if(v1.size() <= 14){
        cout << v1[1] << " is the only one for you..." << endl;
    }else {
        cout << v1[1] <<" and " <<v1[13] << " are inviting you to dinner..." <<endl;
    }

    return 0;
}
