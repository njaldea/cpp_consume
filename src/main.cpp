// g++ main.cpp -o out.a -std=c++20
// g++ main.cpp -o out.a -std=c++20 -isystem /home/njaldea/repo/cpp/nil-gate/src/publish

#include "../../nil-gate/src/publish/nil/gate.hpp"
// #include <nil/gate.hpp>

#include <iostream>

void print(int value)
{
    std::cout << value << std::endl;
}

int main()
{
    nil::gate::Core core;
    auto* e = core.edge(100);
    core.node(&print, {e});

    core.run();

    e->set_value(200);
    core.run();

    return 0;
}
