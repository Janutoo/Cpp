#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
int n;
cin >> n;

    int d=1;
    int k=n;
    while(k>0)
    {
        k=k/10;
        d=d*10;

    }
    d=d/10;
    while(n>9)
    {
        if((n/d)==(n%10))
        {
            n=n%d;
            n=n/10;
            d=d/100;
        }
        else
        {
            cout <<"to nie jst liczba palindromiczna"<<endl;
            return 0;

        }
    }
    cout << "podana liczba jest palindormem\n";
    return 0;
}
