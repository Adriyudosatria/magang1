#include "Time.h"
#include <iostream>

Time::Time () {
    //Base : Second (s)
    pengali["s"] = 1.0;
    pengali["ms"]= 0.001;
    pengali["ns"]= 0.000000001;
    pengali["min"]= 60.0;
    pengali["hour"]= 3600.0;

}

double Time::toBase (double value, std::string satuan){
    if(pengali.count(satuan)){

        return value * pengali[satuan];
    }
    std::cerr << "error unit not found";
    return 0.0;
}

double Time::fromBase(double baseValue, std::string targetsatuan){
    if(pengali.count(targetsatuan)){
        return baseValue/pengali[targetsatuan];
    }
    std::cerr << "Error: Unit not found\n";
    return 0.0; 
}