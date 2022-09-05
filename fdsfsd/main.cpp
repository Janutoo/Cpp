#include <iostream>

using namespace std;

struct ulamek
{
    int l; //licznik
    int m; //mianownik
};
int NWD(int a, int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int NWW(int a, int b)
{
    return (a*b)/NWD(a,b);
}

ulamek dodaj(ulamek u1, ulamek u2)
{
    ulamek u3;
    int nww=NWW(u1.m, u2.m);
    u3.l=u1.l*nww/u1.m-u2.l*nww/u2.m;
    u3.m=nww;
    return u3;

}
ulamek odejmi(ulamek u1, ulamek u2)
{
    ulamek u3;
    int nww=NWW(u1.m, u2.m);
    u3.l=u1.l*nww/u1.m-u2.l*nww/u2.m;
    u3.m=nww;
    return u3;

}
ulamek pomnoz(ulamek u1, ulamek u2)
{
    ulamek u3;
    int nww=NWW(u1.m, u2.m);
    u3.l=u1.l*nww/u1.m+u2.l*nww/u2.m;
    u3.m=nww;
    return u3;

}

int main()
{
    ulamek u1,u2,u3;

    cout << "Podaj pierwszy ulamek" << endl;
    cin>>u1.l>>u1.m;
    cout << "Podaj drugi ulamek\n";
    cin>>u2.l>>u2.m;

    u3=dodaj(u1, u2);
    cout<<u1.l<<"/"<<u1.m<<"+"<<u2.l<<"/"<<u2.m<<"="<<u3.l<<"/"<<u3.m<<endl;
    return 0;
}
