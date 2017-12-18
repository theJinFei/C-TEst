#include <bits/stdc++.h>

using namespace std;

const int N = 100010, INF = 0x3f3f3f3f;

//work1处理链接，work2处理加粗字体，返回值为在被调用函数中处理的最后一个字符的位置。
//因为两者相互调用，故先声明函数
int work1(string &res, string &str, int i);
int work2(string &res, string &str, int i);

int work1(string &res, string &str, int i)
{
    res += "<a href=\"";
    int j = i;
    while(str[i] != '(') i++;//跳到小括号处
    for(i++; str[i] != ')'; i++)
    { //首先跳到小括号处把网址处理好，如果发现网址中有加粗字体，就调用work2，否则直接加到结果中
        if(str[i] == '_')
            i = work2(res, str, i);
        else
            res += str[i];
    }
    res += "\">";
    int k = i;
    i = j;//回到中括号的位置，处理网址的文本显示
    for(i++; str[i] != ']'; i++)
    {
        if(str[i] == '_')//如果发现网址中有加粗字体，就调用work2，否则直接加到结果中
            i = work2(res, str, i);
        else
            res += str[i];
    }
    res += "</a>";
    return k;
}
int work2(string &res, string &str, int i)
{
    res += "<em>";
    for(i++; str[i] != '_'; i++)
    {
        if(str[i] == '[')//如果发现加粗字体中含有网址，就调用work1，否则直接加到结果中
            i = work1(res, str, i);
        else
            res += str[i];
    }
    res += "</em>";
    return i;
}

int main()
{
    string str, res;
    //f_1为true标记上一行为列表，f_2为true标记上一行为段落
    bool f_1 = false, f_2 = false;

    while(getline(cin, str))
    {
        if(str.size() == 0)
        {//此时一个区块结束，处理列表或者段落
            if(f_1 == true)
            {
                f_1 = false;
                res += "</ul>";
                res += '\n';
            }
            if(f_2 == true)
            {
                f_2 = false;
                res += "</p>";
                res += '\n';
            }
            continue;
        }
        if(str[0] == '#')
        {
            int num = 0, i;
            for(i = 0; str[i] == '#'; i++) num++;
            res += "<h";
            res += (num + '0');
            res += '>';
            while(str[i] == ' ') i++;
            for(; str[i]; i++)
            {
                if(str[i] == '[')
                    i = work1(res, str, i);
                else if(str[i] == '_')
                    i = work2(res, str, i);
                else
                    res += str[i];
            }
            res += "</h";
            res += (num + '0');
            res += '>';
            res += '\n';
        }
        else if(str[0] == '*')
        {
            if(f_1 == false)//第一次遇到列表，加上开头并换行
                res += "<ul>", res += '\n';

            f_1 = true; //做标记

            res += "<li>";
            int i = 1;
            while(str[i] == ' ') i++;
            for(; str[i]; i++)
            {
                if(str[i] == '[')
                    i = work1(res, str, i);
                else if(str[i] == '_')
                    i = work2(res, str, i);
                else
                    res += str[i];
            }
            res += "</li>";
            res += '\n';
        }
        else
        {
            if(f_2 == false) //段落的第一行，加上开头
                res += "<p>";
            if(f_2 == true) //非第一行，则加换行
                res += '\n';

            f_2 = true;//做标记

            for(int i = 0; str[i]; i++)
            {
                if(str[i] == '[')
                    i = work1(res, str, i);
                else if(str[i] == '_')
                    i = work2(res, str, i);
                else
                    res += str[i];
            }
        }
    }
    //文件尾也是一个区块的结束，记得处理列表和段落
    if(f_1 == true)
    {
        f_1 = false;
        res += "</ul>";
        res += '\n';
    }
    if(f_2 == true)
    {
        f_2 = false;
        res += "</p>";
        res += '\n';
    }
    cout << res;
    return 0;
}
