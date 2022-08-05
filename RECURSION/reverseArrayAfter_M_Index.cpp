#include<iostream>
using namespace std;

void print(int *arr, int size){
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }cout << endl;
    
}
void reverseArray(int *arr, int size, int i, int j){
    print(arr, size);
      if(i+1>j)
       return;

       swap(arr[i+1], arr[j]);
       i++;
       j--;

       reverseArray(arr, size, i,j);
}

int main (){
    int arr[1000];
    int size=9;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int i;
    cin >>i;
    int j=size-1;
    
    cout <<"Printing array before reversing ";
    print(arr, size);
    reverseArray(arr, size, i,j);
    cout <<"Printing array after reversing ";
    print(arr, size);

    return 0;

}