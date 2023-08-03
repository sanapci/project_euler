#pragma once

#include <common.hpp>
#include <exception>

class NoSmallerCoinException : public std::exception
{
    public:
    const char *what(){
        return "No smaller coin then 1 penny.";
    }
};

class problem {
public:
    // Template
    problem();
    ~problem();
    
    problem(problem&&) = delete;
    problem(const problem&) = delete;
    problem& operator=(problem&&) = delete;
    problem& operator=(const problem&) = delete;

    void solve();
    const char* getResult();

    // Custom

    enum class Coin : UINT
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

    constexpr UINT getValue(const Coin& c)
    {
        return (UINT)c;
    }

    UINT exchangeCoinCount(const Coin& c);
    Coin getSmaller(const Coin& c);

private:

};