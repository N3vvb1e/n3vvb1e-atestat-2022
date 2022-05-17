#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sort.in");
ofstream fout("sort.out");

int n, a[51], b[51], c[51];

int main()
{
    fin >> n;
    for(int i=0; i<n; i++)
        fin >> a[i];
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
                b[i]++;
            else
                b[j]++;
    for(int i=0; i<n; i++)
        c[b[i]]=a[i];
    for(int i=0; i<n; i++)
        a[i]=c[i];
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
