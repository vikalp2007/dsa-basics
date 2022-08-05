#include<iostream>
using namespace std;

void print(int *arr, int size){
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }cout << endl;
    
}
void reverseArray(int *arr, int size, int i){
      if(i>size-i-1)
       return;

       swap(arr[i], arr[size-i-1]);
       i++;

       reverseArray(arr, size, i);
}

int main (){
    int arr[1000];
    int size=9;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int i=0;
    
    cout <<"Printing array before reversing ";
    print(arr, size);
    reverseArray(arr, size, i);
    cout <<"Printing array after reversing ";
    print(arr, size);

    return 0;

}