#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mat.in");

int main()
{
    int n, a[51][51];
    fin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin >> a[i][j];
    int paritate = -1, ok=1;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
            if(j<n-i+1)
            {
                if(paritate==-1)
                    paritate=a[i][j]%2;
                else if(paritate!=a[i][j]%2)
                    ok=0;
            }
    }
    if(ok==1)
        cout << "Da";
    else
        cout << "Nu";
    return 0;
}
