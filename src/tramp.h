#ifndef INCLUDED_Tramp
#define INCLUDED_Tramp

#include "cardpicture.h"

#include <string>

class Tramp
{
    private:
        int number_;
        ICardPicture* picture_;
    public:
        Tramp(int number, ICardPicture* picture);

        int getNumber();
        std::string getPicture();
        std::string toString();

};

#endif /* end of include guard */

