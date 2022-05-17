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
    for(int j=0; j<n; j++)
    {
        int aux=a[j];
        int i=j-1;
        while(aux<a[i] && i>=0)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=aux;
    }
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
