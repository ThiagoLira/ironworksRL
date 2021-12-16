#pragma once
#include "Job.cpp"
#include <cmath>
// this stupid dummy has only one action, punch.
// the optimal strategy is to punch every 5 ticks
// when the charge is at 5
class Dummy : public Job
{
    public:

        const int CHARGE_BY_TICK = 1;

        enum ACTIONS {
            NONE,
            PUNCH
        };

        int charge;

        Dummy() {
            charge = 0;
        }

        ~Dummy() {

        }

        // = operator
        Dummy& operator=(const Dummy& other) {
            this->charge = other.charge;
            return *this;
        }

        int getState() {
            return charge;
        }

        void update(int elapsed){
            if(charge < 5){
                charge += CHARGE_BY_TICK*elapsed;
            }
        }

        void reset(){
            charge = 0;
        }

        bool can_do_action(int action){
            switch (action) {
                case PUNCH:
                   
                        return true;
                    break;
                case NONE:
                        return true;
            }
            return false;
        }

        float do_action(int action){

            float damage = 0;

            switch (action) {
                case PUNCH:
                    damage = pow(charge, 2);
                    charge = 0;
                case NONE:
                    break;
            };

            // calculate damage this tick
            return damage;

        };
            


};