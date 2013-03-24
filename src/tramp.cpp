
#include "tramp.h"

#include <string>
#include <iostream>
#include <sstream>

Tramp::Tramp(int number, ICardPicture* picture)
    :number_(number), picture_(picture)
{ }

int Tramp::getNumber()
{
    return number_;
}

std::string Tramp::getPicture()
{
    return picture_->getPicture();
}

std::string Tramp::toString()
{
    std::stringstream cardface;
    cardface << "pict: " << getPicture() << "/ num: " << getNumber();
    return cardface.str();
}

