#include <iostream>

using namespace std;

struct Suprafata
  {
    float _lung;
    float _lat;
  };
enum TipTeren{agricol,pasune,livada,viran};
struct Teren
  {
      long long _cnpProprietar;
      TipTeren _tipTeren;
      Suprafata _suprafata;
      float _arie;
  };
int main()
{
  Teren unTeren;
  Teren *oMovila= new Teren;
  unTeren._suprafata._lat=25.80;
  unTeren._suprafata._lung=43.50;
  unTeren._cnpProprietar=1841020180035;
  unTeren._tipTeren=agricol;
  unTeren._arie=unTeren._suprafata._lat*unTeren._suprafata._lung;
  oMovila->_arie=unTeren._arie;
  oMovila->_cnpProprietar=unTeren._cnpProprietar;
  oMovila->_suprafata._lat=unTeren._suprafata._lat;
  oMovila->_suprafata._lung=unTeren._suprafata._lung;
  oMovila->_tipTeren=unTeren._tipTeren;
  cout<<oMovila->_arie<<"  "<<oMovila->_cnpProprietar<<"  "<<oMovila->_suprafata._lat<<"  "<<oMovila->_suprafata._lung<<"  ";
  switch (oMovila->_tipTeren)
  {
      case 0:cout<<"agricol"<<endl;break;
      case 1:cout<<"pasune"<<endl;break;
      case 2:cout<<"livada"<<endl;break;
      case 3:cout<<"viran"<<endl;break;
  }
  return 0;
}
