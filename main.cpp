#include <iostream>
#include "IbrasClass.h"
using namespace std;

int main()
{
    IbrasClass iObj;
    iObj.PrintSomething();
    iObj.SetName("Ibra");
    cout<<iObj.GetName()<<endl;
    return 0;
}
