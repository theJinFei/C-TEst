//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> v1;
//    for(int i = 0; i < n; i++){
//        int t;
//        cin >> t;
//        v1.push_back(t);
//    }
//    int ans = 1;
//    int temp = v1[0];
//    for(int i = 1; i < v1.size(); i++){
//        if(v1[i] == temp){
//            continue;
//        }else {
//            ans ++;
//            temp = v1[i];
//        }
//    }
//    cout << ans ;
//
//
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//int a[1000][1000];
//int main()
//{
//    int m,n;
//    cin >> m >> n;
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            cin >> a[i][j];
//        }
//    }
//    for(int i = n-1; i >= 0; i--){
//        for(int j = 0; j < m; j++){
//            cout << a[j][i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//int a[1000][1000];
//int main()
//{
//
//    int n;
//    cin >> n;
//    map<int,int> mapp;
//    for(int i = 0; i < n; i++){
//        int t;
//        cin >> t;
//        cout << ++mapp[t] <<" ";
//    }
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//int Hash[250000];
//int a[500][500];
//int main()
//{
//    int n;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            cin >> a[i][j];
//        }
//    }
//
//}


//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> v1;
//    for(int i = 0; i < n; i++){
//        int t;
//        cin >> t;
//        v1.push_back(t);
//    }
//    int ans = 0;
//    for(int i = 0; i < v1.size(); i++){
//        vector<int>::iterator pos = find(v1.begin() + i, v1.end(), -1 * v1[i]);
//        if(pos != v1.end()){
//            ans ++;
//        }
//    }
//    cout << ans ;
//    return 0;
//
//}

//#include <iostream>
//#include <vector>
//#include <stdio.h>
//#include <algorithm>
//#include <iomanip>
//#include <string>
//#include <cstdio>
//#include <string.h>
//#include <set>
//#include <cmath>
//#include <map>
//using namespace std;
//bool cmp(pair<int,int> a,pair<int,int> b)
//{
//    if(a.second == b.second){
//        return a.first < b.first;
//    }
//    return a.second > b.second;
//}
//int main()
//{
//    map<int,int> mapp;
//    int n;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        int t;
//        cin >> t;
//        mapp[t]++;
//    }
//    vector<pair<int,int> > vec (mapp.begin(), mapp.end());
//    sort(vec.begin(),vec.end(),cmp);
//    cout << vec[0].first;
//    return 0;
//}

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstdio>
#include <string.h>
#include <set>
#include <cmath>
#include <map>
using namespace std;
int main() {
    __int64 ans=0;
    int t;
    scanf("%d",&t);
    if(t<=3500) {
        ans=t;
    } else {
        for(int i=3600; i<160000; i=i+100) {
            __int64 sum=i;
            int a=i-3500;
            if(a<=1500) sum=i-a*3/100;
            else if(a<=4500) sum=i-45-(a-1500)/10;
            else if(a<=9000) sum=i-345-(a-4500)/5;
            else if(a<=35000) sum=i-1245-(a-9000)/4;
            else if(a<=55000) sum=i-7745-(a-35000)*3/10;
            else if(a<=80000) sum=i-13745-(a-55000)*35/100;
            else sum=i-22495-(a-80000)*45/100;
            if(sum==t) {
                ans=i;
                break;
            }
        }
    }
    cout << ans ;
    return 0;
}










