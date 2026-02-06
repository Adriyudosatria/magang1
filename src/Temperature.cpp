#include "Temperature.h"
#include <iostream>

Temperature::Temperature() {
    // base = Celsius
    multiplier["C"] = 1.0;
    offset["C"]     = 0.0;

    multiplier["R"] = 1.25;
    offset["R"]     = 0.0;

    multiplier["F"] = 5.0 / 9.0;
    offset["F"]     = -32.0;

    multiplier["K"] = 1.0;
    offset["K"]     = -273.15;
}

double Temperature::toBase(double value, std::string unit) {
    if (multiplier.count(unit)) {
        return (value + offset[unit]) * multiplier[unit];
    }
    std::cerr << "Error: Unit not found\n";
    return 0.0;

}

double Temperature::fromBase(double baseValue, std::string targetUnit) {
    if (multiplier.count(targetUnit)) {
        return (baseValue / multiplier[targetUnit]) - offset[targetUnit];
    }
    std::cerr << "Error: Unit not found\n";
        return 0.0;
    }

