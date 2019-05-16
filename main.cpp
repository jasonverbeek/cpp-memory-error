#include <iostream>
#include <cstring>
#include <memory>

int *create_and_lose(void)
{
    int x = 4;
    return &x;
}

int main (void)
{
    int *lost = create_and_lose();
    std::cout << lost << std::endl;
    std::cout << &lost << std::endl;
    int *idk = new int(7);
    std::cout << *lost << std::endl;
    std::cout << &lost << std::endl;
    lost = new int(7);
    std::cout << *lost << std::endl;
    std::cout << &lost << std::endl;
    delete idk;
    std::cout << *lost << std::endl;
    std::cout << &lost << std::endl;
}
