#include "cardbox.h"

#include "cardpicture.h"
#include <vector>

static std::vector<Tramp> getCards()
{
    std::vector<Tramp> cards;
    cards.push_back(Tramp(1, new Clover()));
    return cards;
};



