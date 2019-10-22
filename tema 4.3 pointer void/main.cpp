#include <iostream>

using namespace std;

int main()
{
    int n;
    void *pnt=&n;
    *(static_cast<int*>(pnt))=10;
    cout<<n<<endl;
    cout<<*(static_cast<int*>(pnt))<<endl;
}
