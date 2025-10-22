#pragma once
#include <exception>
#include <iostream> 

class Figure_err : public std::exception {
public:
    Figure_err(const std::string& message);
};