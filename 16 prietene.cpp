#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("prietene.in");
ofstream fout("prietene.out");

int n, x;

int prim(int n)
{
    if(n<2 || n>2 && n%2==0)
        return 0;
    for(int d=3; d*d<=n; d+=2)
        if(n%d==0)
            return 0;
    return 1;
}

int main()
{
    fin >> n;
    for(int i=2; i<=n-1; i++)
        for(int j=i+1; j<=n-1; j++)
            if(prim(i)==1 && prim(j)==1 && abs(i-j)<=2)
                cout << "(" << i << " " << j << ")" << ",";
    return 0;
}
