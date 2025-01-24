#ifndef SimulatorRealFlightBasic_h
#define SimulatorRealFlightBasic_h

#include "SimulatorBase.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

            using namespace anduinolib::rc::sim;
            class SimulatorRealFlightBasic : public SimulatorBase {
            public:
                void Restart();

                void BlockSim();

                void UnBlockSim();

                void InitSim();

                void EasyAircraft();

                void AcroAircraft();
            };

        }
    }
}
#endif