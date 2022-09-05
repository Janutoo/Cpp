#include <iostream>

using namespace std;

int main()
{
    cout << "program sprawdza czy podana liczba jest pierwsza !" << endl;
    cout << "podaj liczbe ";
    int n;
    cin >>n;

    if(n==0 || n%2==0)

    {

        cout <<"podana liczba nie jest pierwsza";
        return 0;
    }
    int d=3;
    while (d*d<=0)
    {


       if (n%d==0)
      {

        cout << "podana liczba nie jest pierwsza ";
        return 0;
      }



    else
    {
        d=d+2;
    }
    }
    cout <<"podana liczba jest pierwsza";


    return 0;

}
