#include <iostream>
using namespace std;

void merge(int *arr1, int n, int *arr2, int m, int *arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int *arr3, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int arr2[1000];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int arr3[1000];
    int size = n + m;

    merge(arr1, n, arr2, m, arr3);
    print(arr3, size);

    return 0;
}