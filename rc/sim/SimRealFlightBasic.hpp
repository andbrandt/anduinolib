#ifndef SimulatorRealFlightBasic_h
#define SimulatorRealFlightBasic_h

#include "SimulatorBase.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

            using namespace anduinolib::rc::sim;
            class SimulatorRealFlightBasic : public SimulatorBase {
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