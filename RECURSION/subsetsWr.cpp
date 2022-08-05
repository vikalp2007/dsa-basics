#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> v, int index, vector<int>& output, vector<vector<int>>& ans)
{
    //base case
    if (index>v.size()-1)
    {
        ans.push_back(output);
        return ;
    }

    // exclusion ke liye recursive call
    solve(v, index+1, output, ans);

    // inclusion ke liye recursive call
    int element= v[index];
    output.push_back(element);
    solve(v, index+1, output, ans);
    

}



int main()
{

    vector<int> v = {1, 2, 3};

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(v, index, output, ans);
    

    return 0;
}