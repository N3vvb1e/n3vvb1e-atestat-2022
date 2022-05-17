#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sir.in");

int main()
{
    int n, a[51], b[51], nr=0;
    fin >> n;
    for(int i=1; i<=n; i++)
        fin >> a[i];
    b[1]=1;
    b[2]=1;
    for(int i=3; i<=n ;i++)
        b[i]=b[i-1]+b[i-2];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i]==b[j])
            {
                nr++;
                i++;
                j=1;
            }
    cout << nr;
    return 0;
}
