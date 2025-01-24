#ifndef SimulatorPhoenix_h
#define SimulatorPhoenix_h

#include "SimulatorBase.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

            using namespace anduinolib::rc::sim;

            class SimulatorPhoenix : public SimulatorBase {
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