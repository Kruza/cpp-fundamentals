#pragma once
#include <string>
#include <ctype.h>

std::string calculate(const std::string& command, int first, int second) 
{
    // Convert string to lower case
    std::string com_in = command;
    for(int i = 0; i < com_in.length(); i++)
        com_in[i] = tolower(com_in[i]);

    // Adding "+"
    if (com_in.compare("add") == 0)
        return std::to_string(first + second);

    // Subtracting "-"
    if (com_in.compare("subtract") == 0)
        return std::to_string(first - second);

    // Multiply "-"
    if (com_in.compare("multiply") == 0)
        return std::to_string(first * second);

    // Program should not reach this point
    return "";
}
