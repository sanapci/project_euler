#include <problem.hpp>
#include <iostream>

int main(int argc, char *argv[])
{
    problem p;

    p.solve();

    std::cout << p.getResult() << '\n';

    return 0;
}