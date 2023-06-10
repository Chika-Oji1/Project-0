#ifndef CROPTYPE_H
#define CROPTYPE_H

#include <vector>
#include <string>

class CropType; // Forward declaration

class CropInstance {
    const CropType& type;
    int count;
public:
    CropInstance(const CropType &type, int count) : type(type), count(count) { }
    friend class Farm; // Farm can access private members of CropInstance
};

class CropType {
    std::string name;
    std::vector<CropInstance*> instances;
public:
    CropType(const std::string &name);
    friend class Farm; 
};

#endif
