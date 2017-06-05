#ifndef IBRASCLASS_H
#define IBRASCLASS_H
#include <string>
#include <iostream>

class IbrasClass
{
    public:
        IbrasClass();
        void PrintSomething();
        void SetName(std::string x);
        std::string GetName();
    protected:

    private:
        std::string Name;
};

#endif // IBRASCLASS_H
