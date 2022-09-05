#include <iostream>

using namespace std;

int main()
{


  {


    cout << "Program zamieniania liczbe z systemy dziesetnego na dwojkowy" << endl;
    cout << "Podaj liczbe ";
    int n;
    cin >> n;

    cout<<"podaj liczbe przez któa chcesz dzieliæ:";
    int p;
    cin >>p;


    int r;
    long long  b;
    b=0; // b= liczba w systemie dwojkowym
    long long waga=1;

    while (n>0)
    {


        r=n%p;

        b=b+r*waga;
        waga=waga*10;
        n=n/p;
    }
    cout <<"podana liczba w systemie dwojkowym:" << b << endl;

  }



 return 0;

}
