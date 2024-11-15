#ifndef Simulator_h
#define Simulator_h

#include <Arduino.h> 

namespace anduinolib {
    namespace rc {
        namespace sim {

class SimulatorBase {
public:
    virtual ~SimulatorBase() = default;

    virtual void Restart();

    virtual void Block();

    virtual void UnBlock();

    virtual void EasyAircraft();

    virtual void AcroAircraft();
};

        }
    }
}
#endif