#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;

    for(int k=1; k<=n; k++)
    {
        for(int m=n-k; m>=0; m=m-1)
        {
            cout<<" ";
        }
         for(int i=1; i<=k; i++)
{


                cout<<"*";


}cout<<endl;
    }

return 0;
}
