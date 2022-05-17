#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mat.in");
ofstream fout("mat.out");

int n, a[51][51];

int prim(int n)
{
    if(n<2 || (n>2 && n%2==0))
        return 0;
    for(int d=3; d*d<=n; d+=2)
        if(n%d==0)
            return 0;
    return 1;
}

void citire()
{
    fin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin >> a[i][j];
}

int main()
{
    int s=0;
    citire();
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i<j)
                if(prim(a[i][j]))
                    s+=a[i][j];
    cout << s;
    return 0;
}
