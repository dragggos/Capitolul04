#include <iostream>

using namespace std;

double *pnt1 = new double(1.3);

int main()
{
  double *pnt2=new double(2.3);
  double *pnt3=new double(5.4);
  double *pntMedie=new double;
  *pntMedie=(*pnt1+*pnt2+*pnt3)/3;
  cout<<*pntMedie<<endl;

}
