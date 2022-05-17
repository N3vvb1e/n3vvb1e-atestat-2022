#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int v[100];

int main()
{
    int a, b, i=2;
    fin >> a >> b;
    if(a>b)
    {
        int aux=a;
        a=b;
        b=aux;
    }
    v[1]=1, v[2]=1;
    while(v[i]<b)
    {
        i++;
        v[i]=v[i-1]+v[i-2];
    }
    if(b==v[i] && a==v[i-1])
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
