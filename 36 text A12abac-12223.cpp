#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("txt.in");

int main()
{
    char s[251];
    fin >> s;
    int l=0, maxim = 0, k = 0, ok = 0;
    for(int i = 0 ; i < strlen(s); i++)
    {

        if(s[i] >='0' && s[i] <='9')
        {
            l++;
            ok = 1;
        }
        if((s[i] <'0' || s[i]>'9' || i == strlen(s)-1) && l != 0)
        {
            if(l > maxim)
            {
                maxim = l;
                k = i - l ;
                if(i == strlen(s)-1)
                    k++;
            }
            l = 0;

        }
    }
    int j = k;
    for( k; k < maxim + j; k++)
        cout << s[k];
    if(ok == 0)
        cout <<"Nu exista cifre";
    return 0;
}
