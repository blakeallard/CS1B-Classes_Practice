//
// Created by ekalb on 3/26/2025.
//

#ifndef DRUMS_H
#define DRUMS_H

#include "MusicGear.h"



class Drums : public MusicGear
{
public:
    double headSize;
    string stickSize;
    int    kickSize;

    Drums();
    Drums(int c, double hS, string sS, int kS);

    void SetDrumCost();
    void SetDrumSpecs();
    void DisplaySpecs() const;
};



#endif //DRUMS_H
