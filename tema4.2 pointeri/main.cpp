#include <iostream>

using namespace std;

int main()
{
    short ident1, ident2, identSuma, identProdus;
    short *pntident1, *pntident2, *pntidentSuma, *pntidentProdus;
    pntident1=&ident1;
    pntident2=&ident2;
    pntidentSuma=&identSuma;
    pntidentProdus=&identProdus;
    *pntident1=4; *pntident2=10;
    *pntidentSuma=*pntident1+*pntident2;
    *pntidentProdus=(*pntident1)*(*pntident2);
    cout<<"identSuma= "<<*pntidentSuma<<endl;
    cout<<"identProdus= "<<*pntidentProdus<<endl;
}
