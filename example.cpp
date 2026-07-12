#include "user.hpp"

int main()
{
    User alice("Alice", 25);
    alice.print();

    alice.setName("Alice Smith");
    alice.setAge(26);
    alice.print();

    return 0;
}
