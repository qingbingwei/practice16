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
    int sz = sizeof(arr1)/ sizeof(arr1[0]); //�����С
    for(i = 0;i < n;i++) //��������
    {
        cin >> arr1[i];
    }

    int flag = 0; //�ж��Ƿ��ظ�

    for(i = 0;i < n;i++)
    {
        for(int k = 0;k <= i;k++)
        {
            if((arr1[i] == arr1[k]) && (i != k)) // �ж�arr1���Ƿ��ظ�
            {
                flag = 0; //�ظ�
                break;
            }
            else
            {
                flag = 1; //���ظ�
            }
        }
        if(flag == 1)
        {
            arr2[j] = arr1[i];
            j++;
            flag = 0;
        }
    }

    for(i = 0;i < j;i++) //�������
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
