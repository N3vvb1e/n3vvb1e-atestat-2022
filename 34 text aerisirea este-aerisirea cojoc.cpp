#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("text.in");

char s[251], *p, s1[251];
int ok;

int main()
{
    fin.getline(s,251);
    p=strtok(s," ");
    while(p!=NULL)
    {
        strcpy(s1,p);
        strrev(s1);

    if(strcmp(p,s1)==0)
    {
        cout << p << endl;
        ok=1;
    }
    p=strtok(NULL, " ");
    }
    if(ok==0)
        cout << "NU EXISTA";
    return 0;
}
