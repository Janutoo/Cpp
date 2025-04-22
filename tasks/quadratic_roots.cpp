#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Podaj wspó³czynniki trójmianu kwadratowego" << endl;
    float a, b, c;
    cin >>a>>b>>c;

    if(a!=0)
    {
        float delta;
        delta=b*b-4*a*c;
        float x1, x2;
        if(delta>=0)
        {
            if(delta==0)
            {
                x1=-b/(2*a);
                cout<<"funkcja ma jedno miejsce zerowe x0="<<x1;

            }
            else
            {
                x1=(-b-sqrt(delta))/(2*a);
                x1=(-b+sqrt(delta))/(2*a);
                cout<<"funkcja ma dwa miejsca zerowe x1="<<x1<<"oraz x2"<<x2;

            }




            else
                cout<<"funkcja nie ma miejsca zerowych";

        }
        else
            cout<<"to nie jest funkcja kwadratowa";
    }
    return 0;
}
