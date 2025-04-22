#include <iostream>

using namespace std;

int main()
{
    cout << "podaj postawe systemu : " << endl;
   int p;
   cin>> p;
   cout << "podaj w liczbie w systemie o podanej podstawie"<< endl;
   string bin;
   cin >> bin;

    int dec=0;
    int dl=bin.size(); ///bin.lenght()
    int i=dl-1;
    int waga=1;

    while(i>=0)
    {
        if(bin[i]>='0' && bin[i]<='9')
            dec=dec+(bin[i]-'0')*waga;
        else
        {
            if(bin[i]>='A' && bin[i]<='F')
                dec=dec+(bin[i]-'A'+10)*waga;
            else
            {
                if(bin[i]>='a' && bin[i]<='f')
                dec=dec+(bin[i]-'a'+10)*waga;
                else
                {
                    cout << "podałeś niewłaściwą wartość /n Przerywamy działania programy " ;
                }
            }
        }
        i=i-1;
        waga=waga*2;
    }
    cout << "liczba w systemie dziesiêtmym wynosi: "<<dec<<endl;


    return 0;
}
