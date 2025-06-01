#ifndef TRYPARSE_H
#define TRYPARSE_H

#include <string>
#include <sstream>


/*
            TryParse.h
    Author: Tegra (github.com/RealTegra)
    Last Update: 01/06/2025

    Description: Provides TryParse methods similar 
    to those in C#, returning true or false.
    If true, it also outputs the converted variable.

    Methods:

    TryParseInt    - Converts a string into an int
    TryParseFloat  - Converts a string into a float
    TryParseDouble - Converts a string into a double
    TryParseBool   - Converts a string into a bool

    This library is free to use, but please consider 
    keeping my username in the credits!

    Enjoy ;)

*/


bool TryParseInt(const std::string& str, int& out);
bool TryParseFloat(const std::string& str, float& out);
bool TryParseDouble(const std::string& str, double& out);
bool TryParseBool(const std::string& str, bool& out);

#endif
