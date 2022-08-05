#include <iostream>
using namespace std;

void moveZeroes(int *arr, int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
        
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
    
    moveZeroes(arr, n);
    print(arr, n);

    return 0;
}