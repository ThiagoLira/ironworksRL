#include <iostream>
#include "GreedyAgent.cpp"
#include "Dummy.cpp"
#include <torch/torch.h>

const int TICKS_PER_SECOND = 10;

int main()
{   

    Dummy dummy = Dummy();
    GreedyAgent agent = GreedyAgent();

    // for 1000 ticks
    int dps_counter = 0;

    for(int i = 1; i < 1001; i++){
        dummy.update(1);
        int action = agent.ChoseAction(dummy);
        dps_counter += dummy.do_action(action);
        // every 10 ticks
        if(i % (TICKS_PER_SECOND) == 0){
            // print the dps
            std::cout << "Tick : "  << i << " DPS:"<< dps_counter << std::endl;
            dps_counter = 0;
        }
    }

    return 0;
}