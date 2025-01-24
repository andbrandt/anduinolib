#ifndef SimulatorRealFlight9_h
#define SimulatorRealFlight9_h

#include "SimulatorBase.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

using namespace anduinolib::rc::sim;

class SimulatorRealFlight9 : public SimulatorBase {
public:
    void InitSim();

    void RestartSim();

    void BlockSim();

    void UnBlockSim();

    void EasyAircraft();

    void AcroAircraft();
};

        }
    }
}
#endif