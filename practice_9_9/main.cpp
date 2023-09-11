#include <iostream>

using namespace std;

int main()
{
    //第一题

    //打印上半部分
    int i = 0;
    int j = 0;
    int n = 0;
    cin>> n;
    for(i = 0;i < n;i++)
    {
        //打印空格
        for(j = 0;j < n-1-i;j++)
        {
            cout << " ";
        }
        //打印*
        for(j = 0;j < 2 * i + 1;j++)
        {
            cout << "*";
        }
        cout << endl;

    }

    //下半部分
    for(i = 0;i < n - 1;i++)
    {
        //打印空格
        for(j = 0;j < i + 1;j++)
        {
            cout << " ";
        }
        //打印*
        for(j = 0;j < 2 * (n - i) - 3;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
