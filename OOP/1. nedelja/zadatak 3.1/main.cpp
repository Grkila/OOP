#include <iostream>

using namespace std;
int funkc(int kol,int p=50)
{
    return kol*p;
}

int main()
{
    cout << "molim vas unesite kolicinu karata" << endl;
    int kol;
    cin>>kol;
    cout << "molim vas unesite cenu" << endl;
    int cena;
    cin>>cena;
    cout<<"vas total je:";
    if (cena <=0)
    {
        cout<<funkc(kol)<<endl;
    }
    else
    {
        cout<<funkc(kol,cena)<<endl;
    }
    return 0;
}
