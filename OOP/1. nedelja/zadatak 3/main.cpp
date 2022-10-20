#include <iostream>
#include <math.h>

using namespace std;
float funk(int n);
int main()
{
    int n=1;
    do
    {
        if (n<=0)
        {
            cout<<"nije pozitivan broj brt"<<endl;
        }
        cout<<"unesite pozitivan broj:"<<endl;
        cin>>n;
    }while (n<=0);

    cout<<"rezultat="<<funk(n)<<endl;
}

float funk(int n){
    float zbir=0;
    for (int i=1;i<=n;i++)
    {
        zbir+=sqrt(i);

    }
    return round(zbir*100)/100.0;
}
