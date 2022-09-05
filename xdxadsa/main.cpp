#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    int wagony[n];
    long long sumyCzesciowe[n];
    for(int i=0; i<n; i++)
    {
        cin>>wagony[i];
    }
    sumyCzesciowe[0]=wagony[0];
    for(int i=1; i<n; i++)
    {
        sumyCzesciowe[i]=sumyCzesciowe[i-1]+wagony[i];
    }

    int k;
    cin>>k;

    int p;
    int z;


    for(int i=0; i<k; i++)
    {
        cin>>p;
        cin>>z;
        if(p==1)
            cout<<sumyCzesciowe[z-1]<<endl;
        else
            cout<<sumyCzesciowe[z-1]-sumyCzesciowe[p-2]<<endl;
    }

    return 0;
}
