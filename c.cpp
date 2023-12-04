#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[500][500];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            sum += arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i + j == n - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }
    cout << sum << " " << sum2;
}