#include <iostream>
using namespace std;

int main ()
{
    string murid1, murid2, murid3, murid4, murid5, murid6, murid7, murid8, murid9, murid10, murid11, murid12;
    
    cin >> murid1 >> murid2 >> murid3;
    cin >> murid4 >> murid5 >> murid6;
    cin >> murid7 >> murid8 >> murid9;
    cin >> murid10 >> murid11 >> murid12;
    
    cout << murid1 << " " << murid4 << " " << murid7 << " " << murid10 << endl;
    cout << murid2 << " " << murid5 << " " << murid8 << " " << murid11 << endl;
    cout << murid3 << " " << murid6 << " " << murid9 << " " << murid12 << endl;
    
    return 0;
}