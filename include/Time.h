#ifndef TIME_H
#define TIME_H

#include "Converter.h"

#include <iostream>
#include <string>
#include <map>

class Time : public Converter {
 private :
     std :: map<std :: string, double> pengali;


public :
     Time ();

    double toBase(double value, std::string satuan) override;

    double fromBase(double baseValue, std::string targetsatuan) override;


    };

#endif // TIME_H