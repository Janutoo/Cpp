#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void Scal(int p, int r, int q, int tab[])
{
	int pomoc[100];
	int i=p;
	int j=r+1;
	int k=0;
	while(i<=r && j<=q)
	{
		if(tab[i]<tab[j])
		{
			pomoc[k]=tab[i];
			i++;
		}
		else
		{
			pomoc[k]=tab[j];
			j++;
		}
		k++;
	}
	while(i<=r)
	{
		pomoc[k]=tab[i];
		i++;
		k++;
	}
	while(j<=q)
	{
		pomoc[k]=tab[j];
		j++;
		k++;
	}
	for(int i=0; i<k; i++)
	{
		tab[p+i] = pomoc[i];
	}

}

void Mergesort(int p, int q, int tab[])
{
	if( p < q )
	{
		int r = (p+q)/2;
		Mergesort(p,r, tab);
		Mergesort(r+1,q, tab);
		Scal(p,r,q, tab);
	}
}

int main()
{
	int n;
	cout << "Podaj wielkosc tablicy";
	cin >> n;

	int tab[100];
	srand(time(NULL));

	for(int i=0; i<n; i++)
	{
		//cout << "Podaj "<<i+1<<" element";
		tab[i]=rand()%101-50;;
		cout<<tab[i]<<", ";
		//getchar();
	}
	cout<<endl;

	Mergesort(0,n-1, tab);

	for(int i=0; i<n; i++)
	{
		cout << tab[i]<<", ";
	}


	return 0;
}
