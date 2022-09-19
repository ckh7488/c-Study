#include <iostream>
#include <functional>

// javascript like closure in c++

std::function<void()> closureWrapper()
{
    int x = 10;
    std::function<void()> myFun = [&x](){x += 1; std::cout << "Value in the closure: " << x << std::endl;};
    return myFun;
}

int main()
{
    std::function<std::function<void()>()> outer = closureWrapper;
    std::function<void()> inner = outer();
    inner();
    inner();
    inner();
    inner();
    return 0;
}

