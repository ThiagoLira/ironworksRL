#include "Dummy.cpp"

class GreedyAgent  
{   

    public:
        GreedyAgent(){
        }
        // ALWAYS PUNCH
        int ChoseAction(Dummy dummy){
            return dummy.PUNCH;
        }
};