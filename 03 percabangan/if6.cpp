 #include <iostream>

using namespace std;

int main()
{
    int bilbulat;
    cin >> bilbulat;
    
    if (bilbulat >= 0)
    {
        if (bilbulat % 2 ==0 )
             { cout << "Positif Genap"; }
        else { cout << "Positif Ganjil"; }
    }
    else { cout << "Negatif"; }
}