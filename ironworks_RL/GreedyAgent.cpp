#include "Dummy.cpp"
#include <iostream>


class GreedyAgent  
{   

    public:
        GreedyAgent(){
        }
        // ALWAYS PUNCH WHEN CHARGE IS AT 5
        // THIS IS THE OPTIMAL STRATEGY FOR DUMMY
        int ChoseAction(Dummy dummy){
            if (dummy.getState() == 5){
                return dummy.PUNCH;
            }
            else{
                return dummy.NONE;
            }
        }
};