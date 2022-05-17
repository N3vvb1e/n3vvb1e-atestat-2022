#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("progresie.in");
ofstream fout("progresie.out");

int ar(int x, int y)
{
    return x-y;
}

int geo(int x, int y)
{
    return x/y;
}

int main()
{
    int n, pr, a[51];
    fin >> n;
    for(int i=1; i<=n; i++)
        fin >> a[i];
    int ok=1;
    for(int i=n; i>=3; i--)
    {
        if(ar(a[i], a[i-1]) != ar(a[i-1], a[i-2]))
            ok=0;
    }
    if(ok==1)
        cout << "Elementele sirului formeaza o porgresie aritmetica cu ratia " << ar(a[n], a[n-1]) << endl;
    else
    {
        int ok=1;
        for(int i=n; i>=3; i--)
        {
            if(geo(a[i], a[i-1]) != geo(a[i-1], a[i-2]))
                ok=0;
        }
        if(ok==1)
            cout << "Elementele sirului formeaza o progresie gepmetrica cu ratia " << geo(a[n], a[n-1]) << endl;
        else
            cout << "Elementele sirului nu formeaza nicio progresie" << endl;
    }
    return 0;
}
