#ifndef Simulator_h
#define Simulator_h

#include <Arduino.h> 

namespace anduinolib {
    namespace rc {
        namespace sim {

class SimulatorBase {
public:
    virtual ~SimulatorBase() = default;

    virtual void RestartSim();

    virtual void BlockSim();

    virtual void UnBlockSim();

    virtual void InitSim();

    virtual void EasyAircraft();

    virtual void AcroAircraft();
};

        }
    }
}
#endif