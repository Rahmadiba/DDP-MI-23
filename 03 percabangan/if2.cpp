// library untuk input dan output
#include <iostream>

// untuk memudahkan agar tidak perlu std ::
using namespace std;

int main()
{
    // deklarasi variabel
    int nilai;

    //masukkan nilai ke variabel nilai
    cin >> nilai;

    // jika nilai sama dengan 100 maka
    if (nilai==100) 

    {// output // "SEMPURNA" 
    cout<<"SEMPURNA" << endl;} 

    // jika nilai selain 100 maka
    
    else 
    {// output "BELUM SEMPURNA"
    cout << "BELUM SEMPURNA" << endl;}
}