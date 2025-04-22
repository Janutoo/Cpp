#include <iostream>
using namespace std;

int main ()
{

    int n;
    cin >> n;

    int *temperatury = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> temperatury[i];
    }


    int x;
    cin >> x;


    int k = 0;

    int *dni = new int[n];

    for (int i = 0, j = 0; i < n; i++)
    {
        if (temperatury[i] == x)
        {
            k++;
            dni[j++] = i + 1;
        }
    }


    cout << k;
    for (int j = 0; j < k; j++)
    {
        cout << " " << dni[j];
    }

    delete []temperatury;
    delete []dni;

    return 0;
}
