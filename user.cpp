#include "user.hpp"
#include "user_impl.hpp"

User::User(const std::string& name, int age)
    : pImpl(std::make_unique<Impl>(name, age)) {}

User::~User() = default;

User::User(User&&) noexcept = default;
User& User::operator=(User&&) noexcept = default;

std::string User::getName() const {
    return pImpl->name;
}

int User::getAge() const {
    return pImpl->age;
}

void User::setName(const std::string& name) {
    pImpl->name = name;
}

void User::setAge(int age) {
    pImpl->age = age;
}

void User::print() const {
    std::cout << "User: " << pImpl->name << ", " << pImpl->age << " years old\n";
}
