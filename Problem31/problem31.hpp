#pragma once

class problem {
public:

    enum class Coin : unsigned int
    {
        _1_PENNY = 1,
        _2_PENNY = 2,
        _5_PENNY = 5,
        _10_PENNY = 10,
        _20_PENNY = 20,
        _50_PENNY = 50,
        _1_POUND = 100,
        _2_POUND = 200,
    };

    constexpr unsigned int getValue(const Coin& c)
    {
        return (unsigned int)c;
    }

    unsigned int exchangeCoinCount(const Coin& c) {
        unsigned int count = 0;
        return count;
    }

private:

};