#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mat.in");
ofstream fout("mat.out");

int n, a[51][51], i, j;

int nrcif(int x)
{
    int k=0;
    do
    {
        k++;
        x/=10;
    }while(x!=0);
    return k;
}

int main()
{
    fin >> n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fin >> a[i][j];
    int nr=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i>j)
                if(nrcif(a[i][j])%2==0)
                    nr++;
    cout << nr;
    return 0;
}
