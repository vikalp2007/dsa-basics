#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{

    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex=j;;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
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

    selectionSort(arr, n);
    print(arr, n);

    return 0;
}