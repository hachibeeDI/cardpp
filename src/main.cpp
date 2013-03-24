#include "tramp.h"
#include "cardbox.h"

#include <config.h>
#include <string>
#include <iostream>
#include <vector>
#include <boost/foreach.hpp>


int main(int argc, char const* argv[])
{
    // ICardPicture* pict = new Clover();
    // Tramp card = Tramp(1, pict);
    std::vector<Tramp> cards = Cardbox::getCards();
    BOOST_FOREACH(Tramp& card, cards)
    {
        std::cout << card.toString() << std::endl;
    }
    return 0;
}


