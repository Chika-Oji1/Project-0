#ifndef FARM_H
#define FARM_H

#include <vector>
#include <string>
#include <iostream>

#include "CropType.h"

class Farm {
    std::vector<CropType*> cropTypes;
public:
    void addCropType(const std::string &name);
    void addInstance(const std::string &name, int count);
};

#endif
