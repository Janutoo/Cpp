#include <iostream>

using namespace std;

bool czyPierwsza(int n)
{
    if(n==0 || n==1 || n%2==0)
    {
        //cout << "podana liczba nie jest pierwsza\n";
        return false;
    }
    int d=3;
    while(d*d<=n)
    {
        if(n%d==0)
        {
            //cout << "Podana liczba nie jest pierwsza\n";
            return false;
        }
        else
        {
            d=d+2;
        }
    }
    //cout << "Podana liczba jest pierwsza\n";
    return true;
}


int main()
{
    cout << "Program sprawdza czy podana liczba jest pierwsza" << endl;
   int n;
   cout <<"Podaj n";
   cin >> n;

   if(n>=5)
    cout<<"3 5";
    else
    cout<<"nie ma liczb zaprzyajznionch w zakresie od do"<<n<<endl;



    return 0;
}
