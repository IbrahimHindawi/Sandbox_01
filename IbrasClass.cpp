#include "IbrasClass.h"

IbrasClass::IbrasClass()
{
    //ctor
}

void IbrasClass::PrintSomething()
{
    std::cout << "Hello world!" << std::endl;
}

void IbrasClass::SetName(std::string x)
{
    Name = x;
}

std::string IbrasClass::GetName()
{
    return Name;
}
