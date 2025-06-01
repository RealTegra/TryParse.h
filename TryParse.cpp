#include "TryParse.h"


bool TryParseInt(const std::string& str, int& out) {
    std::stringstream ss(str);
    return (ss >> out) && (ss.eof());
}

bool TryParseFloat(const std::string& str, float& out) {
    std::stringstream ss(str);
    return (ss >> out) && (ss.eof());
}

bool TryParseDouble(const std::string& str, double& out) {
    std::stringstream ss(str);
    return (ss >> out) && (ss.eof());
}

bool TryParseBool(const std::string& str, bool& out) {
    if (str == "true" || str == "1") {
        out = true;
        return true;
    } else if (str == "false" || str == "0") {
        out = false;
        return true;
    }
    return false;
}
