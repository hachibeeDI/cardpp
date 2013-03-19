#include "tramp.h"
#include "cardbox.h"

#include <config.h>
#include <string>
#include <iostream>
#include <vector>

int main(int argc, char const* argv[])
{
    // ICardPicture* pict = new Clover();
    // Tramp card = Tramp(1, pict);
    auto cards = Cardbox::getCards();
    std::cout << cards[0].toString() << std::endl;
    return 0;
}


