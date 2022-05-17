#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mult.in");
ofstream fout("mult.out");

int main()
{
    int n, a[101], ok=1;
    fin >> n;
    for(int i=1; i<=n; i++)
        fin >> a[i];
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
    {
        if(a[i]==a[j])
            ok=0;
    }
    if(ok==1)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
