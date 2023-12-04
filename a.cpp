#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] > 0)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
    
}