#include <iostream>

using namespace std;

long cmmdc(long a, long b)
{
    while(b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    long a, b, c, d;
    long e, f, cmm;
    cin >> a >> b >> c >> d;
    e=a*d+b*c;
    f=b*d;
    cmm=cmmdc(e,f);
    cout << e/cmm << '/' << f/cmm;
    return 0;
}
