#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr1[100] = {0};
    int arr2[100] = {0};
    int i = 0;
    int j = 0;
    int sz = sizeof(arr1)/ sizeof(arr1[0]); //数组大小
    for(i = 0;i < n;i++) //输入数字
    {
        cin >> arr1[i];
    }

    int flag = 0; //判断是否重复

    for(i = 0;i < n;i++)
    {
        for(int k = 0;k <= i;k++)
        {
            if((arr1[i] == arr1[k]) && (i != k)) // 判断arr1中是否重复
            {
                flag = 0; //重复
                break;
            }
            else
            {
                flag = 1; //不重复
            }
        }
        if(flag == 1)
        {
            arr2[j] = arr1[i];
            j++;
            flag = 0;
        }
    }

    for(i = 0;i < j;i++) //输出数字
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
