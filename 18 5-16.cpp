#include <iostream>

using namespace std;

int divizori(int a)
{
    int nr=0;
    for(int i=1; i<=a; i++)
        if(a%i==0)
            nr++;
    return nr;
}

int main()
{
    int k;
    cin >> k;
    int i=1;
    while(divizori(i)!=k)
        i++;
    cout << i;
    return 0;
}
