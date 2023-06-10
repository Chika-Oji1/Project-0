#include "Farm.h"
#include "CropType.h"

int main() {
    // Create a farm
    Farm myFarm;

    // Add some crop types
    myFarm.addCropType("Corn");
    myFarm.addCropType("Wheat");
    myFarm.addCropType("Rice");

    // Add some instances of those crops
    myFarm.addInstance("Corn", 100);
    myFarm.addInstance("Wheat", 200);
    myFarm.addInstance("Rice", 300);

    // Attempt to add an instance of a non-existent crop type
    myFarm.addInstance("Barley", 50);

    return 0;
}
