#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mat.in");
ofstream fout("mat.out");

int n, i, j;
long a[51][51];

void citire()
{
    fin >> n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fin >> a[i][j];
}

long slinie(int x)
{
    long s=0;
    for(j=1; j<=n; j++)
        s+=a[x][j];
    return s;
}

long scoloana(int y)
{
    long s=0;
    for(i=1; i<=n; i++)
        s+=a[i][y];
    return s;
}

int main()
{
    citire();
    int ok=1;
    long sdp=0, sds=0;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i==j)
                sdp+=a[i][j];
            else if(i+j==n+1)
                sds+=a[i][j];
    if(sds!=sdp)
        ok=0;
    for(i=1; i<=n; i++)
        if(slinie(i)!=sdp)
            ok=0;
    for(j=1; j<=n; j++)
        if(scoloana(j)!=sdp)
            ok=0;
    if(ok==1)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
