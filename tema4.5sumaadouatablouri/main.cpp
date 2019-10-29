#include <iostream>

using namespace std;

short arraySuma[41];

int main()
{
    short arrayStack[41];
    short *arrayHeap=new short[41];

    for(int i=0;i<41;i++)
    {
        arrayStack[i]=i*7;
        arrayHeap[i]=i*8;
        arraySuma[i] = arrayStack[i] + arrayHeap[i];
        cout<<arraySuma[i]<<endl;
    }
    cout<<arrayStack<<"  "<<arrayHeap<<"  "<<arraySuma<<endl;
    delete[] arraySuma;
    cout<<arraySuma[5]<<endl;

}
