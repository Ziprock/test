#include "input.h"

input::input()
{
    //ctor
}
/*
void SFML_Input::update(GameState& state) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        state.player.position.y -= 2.f;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        state.player.position.y += 2.f;
}
*/
//void input::update(output& health) {
//    health.health = 3;
//}

void input::update(Game& state) {
    state.value += 1;   // Input modifies the shared data
}
void input::updateDown(Game& state) {
    state.value -= 1;   // Input modifies the shared data
}
void input::updateUp(Game& state) {
    state.value += 1;   // Input modifies the shared data
}
void input::updateReset(Game& state) {
    state.value = 0;   // Input modifies the shared data
}

void input::updateInsert(int num, Game& state) {
    state.value = num;   // Input modifies the shared data
}
