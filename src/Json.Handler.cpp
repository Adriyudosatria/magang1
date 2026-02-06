#include "JsonHandler.h"
#include <fstream>
#include <iostream>

bool JsonHandler::load(std::string filename) {
    data.clear();

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open " << filename << "\n";
        return false;
    }

    file >> data;   // parse JSON
    return true;
}

std::vector<std::string> JsonHandler::getColumn(std::string selector) {
    std::vector<std::string> results;

    if (!data.contains(selector)) return results;

    for (const auto& v : data[selector]) {
        results.push_back(v.get<std::string>());
    }
    return results;
}

void JsonHandler::appendColumn(std::string newHeader,
                              const std::vector<std::string>& values) {
    data[newHeader] = values;
}

void JsonHandler::save(std::string filename) {
    std::ofstream file(filename);
    file << data.dump(4);
}
