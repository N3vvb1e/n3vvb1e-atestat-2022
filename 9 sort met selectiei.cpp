#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sort.in");
ofstream fout("sort.out");

int n, a[51];

int main()
{
    fin >> n;
    for(int i=0; i<n; i++)
        fin >> a[i];
    for(int i=0; i<n-1; i++)
    {
        int p=i;
        for(int j=i+1; j<n; j++)
            if(a[j]<a[p])
                p=j;
        int aux=a[i];
        a[i]=a[p];
        a[p]=aux;
    }
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
