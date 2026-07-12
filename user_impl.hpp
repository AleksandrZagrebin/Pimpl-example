#pragma once

#include "user.hpp"
#include <iostream>

struct User::Impl 
{
    std::string name;
    int age;

    Impl(const std::string& n, int a) : name(n), age(a) {}
};
