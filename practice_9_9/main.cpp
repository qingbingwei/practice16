#include <iostream>

using namespace std;

int main()
{
    //��һ��

    //��ӡ�ϰ벿��
    int i = 0;
    int j = 0;
    int n = 0;
    cin>> n;
    for(i = 0;i < n;i++)
    {
        //��ӡ�ո�
        for(j = 0;j < n-1-i;j++)
        {
            cout << " ";
        }
        //��ӡ*
        for(j = 0;j < 2 * i + 1;j++)
        {
            cout << "*";
        }
        cout << endl;

    }

    //�°벿��
    for(i = 0;i < n - 1;i++)
    {
        //��ӡ�ո�
        for(j = 0;j < i + 1;j++)
        {
            cout << " ";
        }
        //��ӡ*
        for(j = 0;j < 2 * (n - i) - 3;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
