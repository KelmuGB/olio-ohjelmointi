#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int h, double d);
    int getHorsepower();
    void setHorsepower(int h);
    double getDisplacement();
    void setDisplacement(double d);
};

#endif // ENGINE_H
