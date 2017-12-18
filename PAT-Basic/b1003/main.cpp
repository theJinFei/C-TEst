#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


bool test1(string s) {
    if (s[0] == 'A') {
        std::string::size_type pos;
        pos = s.find("PAT");
        if (pos == std::string::npos) return 0;
        int x1 = 0;
        int x2 = 0;
        for (int i = 0; i < pos; i++) {
                x1 ++;
            if (s[i] != 'A') return 0;
        }
        for (int i = pos+3; i < s.size(); i++) {
            x2++;
            if (s[i] != 'A') return 0;
        }
        if (x2 == 0) return 0;
            return 1;
    } else if (s[0] == 'P') {
          if (s.size() != 3) return 0;
        std::string::size_type pos;
        pos = s.find("PAT");

        if (pos == std::string::npos) return 0;

        for (int i = pos+3; i < s.size(); i++) {
            if (s[i] != 'A') return 0;
        }
        return 1;
    } else {
        return 0;
    }
}

int test2(string s) {

    std::string::size_type pos1, pos2;
    pos1 = s.find("P");
    if (pos1 == std::string::npos) return 0;
    pos2 = s.find("T");
    if (pos2 == std::string::npos) return 0;
    int x1 = pos1;
    int x2 = pos2-pos1-1;
    int x3 = (s.size()-1) - pos2;




    //cout << s << "   " << x1 << " " << x2 << " " << x3 << endl;

    for (int i = 0; i < pos1; i++) {
        if (s[i] != 'A') return 0;
    }
    for (int i = pos1+1; i < pos2; i++) {
        if (s[i] != 'A') return 0;
    }

    for (int i = pos2+1; i < s.size(); i++) {
        if (s[i] != 'A') return 0;
    }
   // if (x3 >= x1 && 1 <= x2 && x2 <= 2) return 1;

    if ((x2-1) * x1 == x3 - x1 && x2 >= 1) return 1;
    else return 0;
}

int main() {
    int n;
   // freopen("in.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (test1(s) || test2(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
