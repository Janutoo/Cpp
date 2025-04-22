#include <iostream>
#include <cctype> ///ctype.h

using namespace std;

string szyfruj(string tekst, int klucz)
{
    string szyfr="";
    int n = tekst.size();
    char znak;
    for(int i=0;i<n;i++)
    {
        if(isalpha(tekst[i]))
        {
             znak=toupper(tekst[i])+klucz;
        if(znak>'Z')
            znak=znak-26;
        szyfr=szyfr+znak;  
        }
    }
    return szyfr;
}

int main()
{
    cout << "Podaj zdanie do zaszyfrowania " << endl;
    string zdanie;
    cin >> zdanie;
    getline (cin,zdanie);
    cout << "Podaj klucz ";
    int k;
    cin >>k;

    cout << "Wynik szyfrowania: "<<szyfruj(zdanie, k)<<endl;
    return 0;
}
