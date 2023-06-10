#include "Farm.h"
#include "CropType.h"

void Farm::addCropType(const std::string &name) {
    cropTypes.push_back(new CropType(name));
}

void Farm::addInstance(const std::string &name, int count) {
    for (CropType* cropType : cropTypes) {
        if (cropType->name == name) {
            cropType->instances.push_back(new CropInstance(*cropType, count));
            return;
        }
    }
    std::cout << "Crop type not found: " << name << std::endl;
}
