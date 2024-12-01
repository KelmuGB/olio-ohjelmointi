#include "engine.h"

Engine::Engine() {

}

Engine::Engine(int h, double d) {
    this->setHorsepower(h);
    this->setDisplacement(d);
}

int Engine::getHorsepower() {
    return horsepower;
}

void Engine::setHorsepower(int h) {
    horsepower = h;
}

double Engine::getDisplacement() {
    return displacement;
}

void Engine::setDisplacement(double d) {
    displacement = d;
}
