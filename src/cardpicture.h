#ifndef INCLUDED_cardface
#define INCLUDED_cardface

#include <string>
using std::string;
#include <iostream>

class ICardPicture
{
    public:
        virtual string getPicture() = 0; // NOTE: declare method without define implements.
};

class Clover : public ICardPicture
{
    public:
        Clover();
        string getPicture();
};


class Spade : public ICardPicture
{
    public:
        Spade();
        string getPicture();
};


class Diamond : public ICardPicture
{
    public:
        Diamond();
        string getPicture();
};


class Heart : public ICardPicture
{
    public:
        Heart();
        string getPicture();
};

#endif /* end of include guard */

