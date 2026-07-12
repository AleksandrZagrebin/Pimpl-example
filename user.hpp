#pragma once

#include <memory>
#include <string>

class User {
public:
    User(const std::string& name, int age);
    ~User();

    User(const User&) = delete;
    User& operator=(const User&) = delete;

    User(User&&) noexcept;
    User& operator=(User&&) noexcept;

    std::string getName() const;
    int getAge() const;
    void setName(const std::string& name);
    void setAge(int age);
    void print() const;

private:
    struct Impl;
    std::unique_ptr<Impl> pImpl;
};
