#include <iostream>

using namespace std;
enum IZBOR {iznad,ispod,na};

void unos(int* arr,int velicina);
int ispisEl(int* arr,int velicina, IZBOR izbor);
int main()
{
    int a;
    cout << "Unesite velicinu kvadratne matrice" << endl;
    int velicina;
    cin>> velicina;

    int* arr= new int [velicina*velicina];
    unos(arr,velicina);

    cout << "Unesite velicinu kvadratne matrice" << endl;
    //implementirati izbor kasnije
    IZBOR izbor =ispod;
    int rez=ispisEl(arr,velicina,izbor);
    cout<<"rezultat="<<rez<<endl;

    return 0;

}
void unos(int* arr,int velicina)
{
    for(int y=0;y<velicina;y++)
    {
        for(int x=0;x<velicina;x++)
        {
            cout<<"unesite element ["<<y<<"]"<<"["<<x<<"]"<<endl;
            cin>>arr[y*velicina+x];
        }
    }
    return;
}
int ispisEl(int* arr,int velicina, IZBOR izbor)
{
    int rezultat=0;
        for(int y=0;y<velicina;y++)
    {
        for(int x=0;x<velicina;x++)
        {
            switch(izbor)
            {
            case (iznad):
                if (x>y)
                {
                    cout<< arr[y*velicina+x];
                rezultat=arr[y*velicina+x]+rezultat;
                }
                else{
                    cout<<"0";
                }

                break;
            case (ispod):
                if (x<y)
                {
                    cout<< arr[y*velicina+x];
                rezultat=arr[y*velicina+x]+rezultat;
                }
                else{
                    cout<<"0";
                }
                break;
            case (na):
                if (x==y)
                {
                    cout<< arr[y*velicina+x];
                rezultat=arr[y*velicina+x]+rezultat;
                }
                else{
                    cout<<"0";
                }
                break;
            }
        }
        cout<<endl;
    }
    return rezultat;
}

