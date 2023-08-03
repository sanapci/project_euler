#pragma once

#include <common.hpp>

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

private:

};