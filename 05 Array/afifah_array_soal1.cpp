#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    string array[n];
    
    for (int i = 0; i < n; i++)
    { getline(cin, array[i]); }
    
    for (int i = n-1; i >= 0; i--)
    {cout << array[i] << endl;}
    
    return 0;
}