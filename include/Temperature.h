#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "Converter.h"
#include <iostream>
#include <string>
#include <map>

class Temperature : public Converter {
    private :
    std::map<std::string, double> multiplier;
    std::map<std::string, double> offset;

    public:
    Temperature();

    double toBase(double value, std::string unit) override;

    double fromBase(double baseValue, std::string targetUnit) override;


};



#endif //TEMPERATURE_H






