#include<iostream>
using namespace std;

void reverse(string& s, int i){
    if(i>s.length()-i-1)
    return;

    swap(s[i], s[s.length()-i-1]);
    i++;
    

    reverse(s, i);
}

int main(){
    string s;
    cin >> s;

    int i=0;
    
    
    reverse(s, i);
    cout << "Reverse is "<< s<<endl;

    return 0;
}