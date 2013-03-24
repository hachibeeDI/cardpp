#include "cardbox.h"

#include "cardpicture.h"


std::vector<Tramp>
Cardbox::_buildCards(ICardPicture* pict)
{
    std::vector<Tramp> cards;
    for (int i = 0; i < 13; i++)
    {
        cards.push_back(Tramp(i, pict));
    }
    return cards;
};


std::vector<Tramp>
Cardbox::getCards()
{
    return Cardbox::_buildCards(new Clover());
};


