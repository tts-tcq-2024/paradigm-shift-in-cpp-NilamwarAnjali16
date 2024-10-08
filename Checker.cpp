#include <assert.h>
#include <iostream>
using namespace std;

bool batteryIsOk(float temperature, float soc, float chargeRate) {
    bool isOk = true; // Assume battery is okay by default

    // Check temperature
    if (temperature < 0 || temperature > 45) {
        cout << "Temperature out of range!\n";
        isOk = false;
    }
    
    // Check state of charge
    if (soc < 20 || soc > 80) {
        cout << "State of Charge out of range!\n";
        isOk = false;
    }
    
    // Check charge rate
    if (chargeRate > 0.8) {
        cout << "Charge Rate out of range!\n";
        isOk = false;
    }

    return isOk; // Return the final status
}

int main() {
    assert(batteryIsOk(25, 70, 0.7) == true); // Test case 1: Should return true
    assert(batteryIsOk(50, 85, 0) == false); // Test case 2: Should return false
}
