#pragma once
class Job
{
    public:
    
        float state{};

        float getState();

        void update(int elapsed);

        void do_action(int action);
};