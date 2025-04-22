#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int z=0;
    srand(time(NULL));
    int n, m;

    cout << "Podaj wymiary tablicy dwuwymiarowej" << endl;
    cin>>n>>m;
    int A[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            A[i][j]=rand()%101;
            cout<<A[i][j]<<'\t';


        }
        cout<<'\n';
    }
    for(int k=0;k<n;k++)
    {

        z=A[k][1]+z;
    }

 cout<<z<<endl;
    return 0;

}
