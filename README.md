# TryParse.h
A library that provides TryParsing methods similiar to C# into C++
# Methods
    TryParseInt    - Converts a string into an int
    TryParseFloat  - Converts a string into a float
    TryParseDouble - Converts a string into a double
    TryParseBool   - Converts a string into a bool

# How to Use 
The function returns a bool indicating whether the conversion was successful. It takes the input string and an output variable as parameters:

    bool TryParse(input string, output)

Include the two files in the root of your project and add   
    
    #include "TryParse.h"

On the top of your cpp files

then compile the source using the following command
    
    g++ main.cpp -L. -ltryparse -o output

# License
    This library is free to use, but please consider 
    keeping my username in the credits!
