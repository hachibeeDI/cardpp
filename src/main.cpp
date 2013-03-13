#include "tramp.h"
#include "cardpicture.h"

#include <config.h>
#include <string>
#include <iostream>

int main(int argc, char const* argv[])
{
    ICardPicture* pict = new Clover();
    Tramp card = Tramp(1, pict);
    std::cout << card.toString() << std::endl;
    return 0;
}



