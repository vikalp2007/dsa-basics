#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n, int i)
{

    if (i > n - 1)
        return;

    for (int j = 0; j < n - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubbleSort(arr, n, i + 1);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 1;

    bubbleSort(arr, n, i);
    print(arr, n);

    return 0;
}