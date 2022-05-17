#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Mat.in");
ofstream fout("mat.out");

long long nr_div(int x)
{
    long nr=0;
    for(int i=1; i<=x; i++)
        if(x%i==0)
            nr++;
    return nr;
}

int main()
{
    int n, m;
    int a[51][51];
    int maxi=0;
    fin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            fin >> a[i][j];
            if(nr_div(a[i][j])>maxi)
                maxi=nr_div(a[i][j]);
        }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(nr_div(a[i][j])==maxi)
                cout << a[i][j] << endl;
    return 0;
}
