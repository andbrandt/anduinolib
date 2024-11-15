#ifndef SimulatorPhoenix_h
#define SimulatorPhoenix_h

#include "SimulatorBase.hpp"

namespace anduinolib {
    namespace rc {
        namespace sim {

            using namespace anduinolib::rc::sim;

            class SimulatorPhoenix : public SimulatorBase {
            public:
                void Restart();

                void Block();

                void UnBlock();

                void EasyAircraft();

                void AcroAircraft();
            };

        }
    }
}
#endif