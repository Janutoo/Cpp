#include <iostream>
#include <ctime>


using namespace std;

void losujTablice(int A[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        A[i]=rand()%101;
    }
}
void wypiszTablice(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<",";
    }
    cout<<endl;
}

void sortujTablice(int A[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-1-i; j++)
    {
        if(A[j]>A[j+1])
            swap(A[j], A[j+1]);
    }
}

void scal(int A[], int n, int B[], int m, int C[])
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        {
            C[i+j]=A[i];
            i++;
        }
        else
        {
            C[i+j]=B[j];
            j++;
        }
    }
    while(i<n)
    {
        C[i+j]=A[i];
        i++;
    }
    while(j<m)
    {
        C[i+j]=B[j];
        j++;
    }

}

int main()
{
    int n;
    cout << "Podaj wielkosc pierwszej tablicy" << endl;
    cin>>n;
    int A[n];

    losujTablice(A,n);
    wypiszTablice(A,n);
    sortujTablice(A,n);
    wypiszTablice(A,n);

    int m;
    cout<<"Podaj wielkosc drugiej tablicy"<<endl;
        cin>>m;
        int B[n];

    losujTablice(B,m);
    wypiszTablice(B,m);
    sortujTablice(B,m);
    wypiszTablice(B,m);

    int C[n+m];
    scal(A,n,B,m,C);
    cout<< "Podana tablica to"<<endl;
    wypiszTablice(C, n+m);


    return 0;
}
