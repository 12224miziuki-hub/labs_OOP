#include "Engine.h"

Engine::Engine() : volume(0.0), power(0), serialNum("0000") {}

Engine::Engine(double v, int p, string s) : volume(v), power(p), serialNum(s) {}

void Engine::setVolume(double v) { volume = v; }
void Engine::setPower(int p) { power = p; }
void Engine::setSerialNum(string s) { serialNum = s; }

double Engine::getVolume() const { return volume; }
int Engine::getPower() const { return power; }
string Engine::getSerialNum() const { return serialNum; }

void Engine::print() const {
    cout << "ƒвигун: об'Їм = " << volume
        << " л, потужн≥сть = " << power
        << " к.с., заводський є " << serialNum << endl;
}
