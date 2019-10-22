#include <iostream>

using namespace std;

int n=10;
static float m=1.25;

namespace ns1
  {
    short j=20;
  }

int main()
{
  float k=2.985;
  int p=40;
  static short i=7;

  cout<<&n<<endl;
  cout<<&m<<endl;
  cout<<&ns1::j<<endl;
  cout<<&k<<endl;
  cout<<&p<<endl;
  cout<<&i<<endl;

}
