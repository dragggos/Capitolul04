#include <iostream>

using namespace std;

int main()
{
   char sirStack[]="Astazi este duminica si eu imi fac tema la C++";
   char *sirHeap=new char[*sirStack];
   for(int i=0; i<*sirStack;i++)
      sirHeap[i]=sirStack[i];
    cout<<sirHeap<<endl;
    int j=1;
    for (int i=0; i<*sirStack;i++)
       if (sirStack[i]==' ') j++;
    cout<<"Numarul de cuvinte al textului introdus este: "<<j<<endl;
}
