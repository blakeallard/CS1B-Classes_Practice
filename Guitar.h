//
// Created by ekalb on 3/26/2025.
//

#ifndef GUITAR_H
#define GUITAR_H

#include "MusicGear.h"



class Guitar : public MusicGear
{
public:
    int stringGauge;
    int ampWattage;
    int numGuitars;

    Guitar();
    Guitar(int c, int sG, int aW, int nG);

    void SetGuitarCost();
    void SetGuitarSpecs();
    void DisplaySpecs() const;
};



#endif //GUITAR_H
