#include <iostream>

using namespace std;

int main()
{
    int d1, m1, y1, d2, m2, y2, ok=1;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if(d1==29 && m1==2 && (y1%400!=0 || y1%4!=0))
        ok=0;
    if(d2==29 && m2==2 && (y2%400!=0 || y2%4!=0))
        ok=0;
    if(((m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) && d1>31) || (m1==2 || m1==4 || m1==6 || m1==9 || m1==11) && d1>30)
        ok =0;
    if(((m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12) && d2>31) || (m2==2 || m2==4 || m2==6 || m2==9 || m2==11) && d2>30)
        ok =0;
    if((m1<1 || m1>12) || (m2<1 || m2>12))
        ok=0;
    if(ok==0)
        cout << "data invalida";
    else
    {
        if(m2<m1)
            cout << y2-y1-1 << " ani";
        else
            if(d2<d1 && m2==m1)
                cout << y2-y1-1 << " ani";
            else
                cout << y2-y1 << " ani";
    }
    return 0;
}
