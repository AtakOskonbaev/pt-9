#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[500][500];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = count;
            count++;
        }
        i++;
        for (int k = n-1; k >= 0; k--)
        {
            arr[i][k] = count;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}