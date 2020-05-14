#include <iostream>

using namespace std;

string imie;
int liczba;

int main()
{
    cout << "Czesc. Jak masz na imie? ";
    cin>>imie;
    cout<<"Podaj dodatnia liczbe calkowita: ";
    cin>>liczba;

    for(int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }
    return 0;
}
