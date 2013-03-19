#include "cardbox.h"

#include "cardpicture.h"

std::vector<Tramp> Cardbox::getCards()
{
    std::vector<Tramp> cards;
    cards.push_back(Tramp(1, new Clover()));
    return cards;
};



