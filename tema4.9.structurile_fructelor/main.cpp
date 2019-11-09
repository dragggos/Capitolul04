#include <iostream>

using namespace std;

enum Tip{mere,banane,kiwi,nuci};
struct Produs
  {
    Tip tipProdus;
    float cantitate;
    float pret;
  };

int main()
{
  Produs tabl[3];
  int n,stoc=0;
  for(int i=0;i<3;i++)
  {
      cout<<"Introduceti tipul(1-mere, 2-banane, 3-kiwi, 4-nuci):";
      cin>>n;
      tabl[i].tipProdus=static_cast<Tip>(n);
      cout<<"Introduceti cantitatea:";
      cin>>tabl[i].cantitate;
      cout<<"Introduceti pretul:";
      cin>>tabl[i].pret;
  }
  cout<<"Produs"<<"  "<<"Cant"<<"  "<<"Pret"<<endl;
  for(int i=0;i<3;i++)
  {
      switch(tabl[i].tipProdus)
      {
      case 1: cout<<"mere  "<<"  "<<tabl[i].cantitate<<"  "<<tabl[i].pret<<endl; break;
      case 2: cout<<"banane"<<"  "<<tabl[i].cantitate<<"  "<<tabl[i].pret<<endl; break;
      case 3: cout<<"kiwi  "<<"  "<<tabl[i].cantitate<<"  "<<tabl[i].pret<<endl; break;
      case 4: cout<<"nuci  "<<"  "<<tabl[i].cantitate<<"  "<<tabl[i].pret<<endl; break;
      default: cout<<"Nu avem aceste fructe in stoc!"<<endl;
      }
      stoc=stoc+tabl[i].cantitate*tabl[i].pret;
  }
  cout<<"Valoarea stocului este:"<<stoc<<endl;
  return 0;
}
