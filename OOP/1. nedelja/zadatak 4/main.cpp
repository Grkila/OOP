#include <iostream>

using namespace std;

int main()
{
    cout << "unesite godinu" << endl;
    int g;
    cin>>g;

    if (g%4==0)
    {
        if(g%100==0 && g%400!=0)
        {

        }
        else
        {
            cout<<"prestupna je"<<endl;
            return 0;
        }
    }

            cout<<"nije prestupna"<<endl;
    return 0;
}
