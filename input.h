#ifndef INPUT_H
#define INPUT_H
#include <data.h>


class input
{
    public:
        input();
        //void update(output& health);
        void update(Game& state);
        void updateUp(Game& state);
        void updateDown(Game& state);
        void updateReset(Game& state);
        void updateInsert(int num, Game& state);

    private:
};



#endif // INPUT_H
