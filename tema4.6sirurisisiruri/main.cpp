#include <iostream>

using namespace std;

int main()
{
   char sirStack[]="Astazi este duminica si imi fac temele la C++";
   char *sirHeap=new char[sizeof(sirStack)];
   for(int i=0; i<sizeof(sirStack);i++)
      sirHeap[i]=sirStack[i];
    cout<<sirHeap<<endl;
    int j=1;
    for (int i=0; i<sizeof(sirStack);i++)
       if (sirStack[i]==' ') j++;
    cout<<"Numarul de cuvinte al textului introdus este: "<<j<<endl;
}
