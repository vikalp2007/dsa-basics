#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n, int i)
{

    if (i >= n)
        return;

    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }
    swap(arr[minIndex], arr[i]);

    selectionSort(arr, n, i + 1);
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
    int i = 0;

    selectionSort(arr, n, i);
    print(arr, n);

    return 0;
}