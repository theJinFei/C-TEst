#include <iostream>
#include <set>
using namespace std;
/**
必须要车号大的先出，小的后出。所以列车排队的每一队必须是从大到小排列（从右往左看），才能保证开出去的车也是从大到小的。
对于每一个想要进入并列铁轨的车，如果车号大于每一队的队尾的车号，说明不能进入已经有的队伍，必须进入新的铁轨
否则，选择一个最接近它车号的尾部车号的队伍进入
其实无需保存每一个并行队列的所有值，只需要保存当前队伍的车尾（就是每一列最左边 即 每一列的最小值）即可
因为每一次都是需要排序比较大小的，所以用set自动排序
首先把set里面放入一个0值。每一次set的最后一个值s.rbegin()都是当前所有队列队尾的最大值.
如果当前想要进入排队队伍的t值比集合里面最大值小，就移除第一个比他大的值，然后把t插入集合中。表示的是将t值插入了最接近它车号的队伍的队尾
否则就直接插入进去t值。作为新的队伍。
s.upper_bound(t)返回的是第一个大于t的迭代器的位置
在前面加星号表示取这个位置的值
所以s.erase(*(s.upper_bound(t)));表示删除当前这个刚好大于t的位置处的值
因为一开始插入了一个没有的0，所以最后输出是s.size()-1;

参见：柳婼 の blog http://www.liuchuo.net/archives/1967
 */


int main()
{
    set<int> s1;
    s1.insert(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp < *s1.rbegin()){ //s1.begin()返回的是当前集合中最大值位置的迭代器 取值的时候需要用*
            s1.erase(*(s1.upper_bound(temp)));
        }
        s1.insert(temp);
    }
    cout<<s1.size()-1;
    return 0;
}
