#include <bits/stdc++.h>

using namespace std;

const int N = 100010, INF = 0x3f3f3f3f;

//work1�������ӣ�work2����Ӵ����壬����ֵΪ�ڱ����ú����д�������һ���ַ���λ�á�
//��Ϊ�����໥���ã�������������
int work1(string &res, string &str, int i);
int work2(string &res, string &str, int i);

int work1(string &res, string &str, int i)
{
    res += "<a href=\"";
    int j = i;
    while(str[i] != '(') i++;//����С���Ŵ�
    for(i++; str[i] != ')'; i++)
    { //��������С���Ŵ�����ַ����ã����������ַ���мӴ����壬�͵���work2������ֱ�Ӽӵ������
        if(str[i] == '_')
            i = work2(res, str, i);
        else
            res += str[i];
    }
    res += "\">";
    int k = i;
    i = j;//�ص������ŵ�λ�ã�������ַ���ı���ʾ
    for(i++; str[i] != ']'; i++)
    {
        if(str[i] == '_')//���������ַ���мӴ����壬�͵���work2������ֱ�Ӽӵ������
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
        if(str[i] == '[')//������ּӴ������к�����ַ���͵���work1������ֱ�Ӽӵ������
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
    //f_1Ϊtrue�����һ��Ϊ�б�f_2Ϊtrue�����һ��Ϊ����
    bool f_1 = false, f_2 = false;

    while(getline(cin, str))
    {
        if(str.size() == 0)
        {//��ʱһ����������������б���߶���
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
            if(f_1 == false)//��һ�������б����Ͽ�ͷ������
                res += "<ul>", res += '\n';

            f_1 = true; //�����

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
            if(f_2 == false) //����ĵ�һ�У����Ͽ�ͷ
                res += "<p>";
            if(f_2 == true) //�ǵ�һ�У���ӻ���
                res += '\n';

            f_2 = true;//�����

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
    //�ļ�βҲ��һ������Ľ������ǵô����б�Ͷ���
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
