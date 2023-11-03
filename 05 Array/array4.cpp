#include <iostream>
using namespace std; 

int main()
{
    int matrix [100][100];
    int jum_baris, jum_kolom, i, j;

    cout << "input jumlah baris matrix:";
    cin >> jum_baris;

    cout << "input jumlah kolom matrix:";
    cin >> jum_kolom;
    cout << endl;

    for (i = 0; i < jum_baris ; i ++)
        {
            for (j = 0; j < jum_kolom; j++)
            {
                cout << "Baris" << i+1 << ", kolom" << j+1 << "=";
                cin >> matrix [i][j];
            }
            cout << endl;
        }

    cout << "hasil matrix:" << endl;

    for(i = 0; i < jum_baris ; i++)
        {
            for(j + 0; j < jum_kolom; j++)
            {
                cout << matrix [i][j] << " ";
            }
            cout << endl;
        }

}