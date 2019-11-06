#include <iostream>

using namespace std;

struct adresa{
  char prenumele[15];
  char strada[20];
  char orasul[15];
  char judetul[12];
  int nr;
  int codpostal;
};

int main()
{
    adresa Serbu;
    cout<<"prenumele:"; cin>>Serbu.prenumele;
    cout<<"judetul:";cin>>Serbu.judetul;
    cout<<"orasul:";cin>>Serbu.orasul;
    cout<<"strada:";cin>>Serbu.strada;
    cout<<"nr:";cin>>Serbu.nr;
    cout<<"cod postal:";cin>>Serbu.codpostal;
    cout<<"Ma numesc "<<Serbu.prenumele<<endl<<"M-am nascut in judetul "<<Serbu.judetul<<", orasul "<<Serbu.orasul<<", pe strada "<<Serbu.strada<<", la numarul "<<Serbu.nr<<endl;

    return 0;
}
