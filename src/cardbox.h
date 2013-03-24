
#ifndef INCLUDED_carbox
#define INCLUDED_carbox

#include "tramp.h"
#include <vector>

class Cardbox
{
private:
    static std::vector<Tramp> _buildCards(ICardPicture* pict);

public:
    static std::vector<Tramp> getCards();
};


#endif /* end of include guard */

