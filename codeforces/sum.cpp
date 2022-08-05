#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int minAns = INT_MAX;

    if (s < 10)
    {
        minAns = s;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    if ((i + j + k) == s && i != j && j != k)
                    {
                        int possibleAns = i * 100 + j * 10 + k;
                        if (possibleAns < minAns)
                        {
                            minAns = possibleAns;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if ((i + j + k) == s && i != j && j != k)
                {
                    int possibleAns = i * 100 + j * 10 + k;
                    if (possibleAns < minAns)
                    {
                        minAns = possibleAns;
                    }
                }
            }
        }
    }

    cout << minAns << " " << endl;

    return 0;
}