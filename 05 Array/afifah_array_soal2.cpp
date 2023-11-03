#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "";
    getline(cin, a);
    
    for (char karakter : a)
    { cout << karakter << endl; }
    
    return 0;
}