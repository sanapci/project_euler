#include "problem.hpp"

problem::problem()
{
    // Setup
}

void problem::solve()
{
    // Solve problem
}

const char* problem::getResult()
{
    // Return result
    return "";
}

problem::~problem()
{
    // Tear down
}

UINT problem::exchangeCoinCount(const Coin& c) {
    switch (c)
    {
    case Coin::_2_PENNY:
        return 1; // 1 + 1
    case Coin::_5_PENNY:

    
    default:
        return 0;
    }
    return 0;
}

problem::Coin problem::getSmaller(const Coin& c)
{
    switch(c)
    {
        case Coin::_2_POUND: return Coin::_1_POUND;
        case Coin::_1_POUND: return Coin::_50_PENNY;
        case Coin::_50_PENNY: return Coin::_20_PENNY;
        case Coin::_20_PENNY: return Coin::_10_PENNY;
        case Coin::_10_PENNY: return Coin::_5_PENNY;
        case Coin::_5_PENNY: return Coin::_2_PENNY;
        case Coin::_2_PENNY: return Coin::_1_PENNY;
        default: throw NoSmallerCoinException();
    }
}