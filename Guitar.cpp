//
// Created by ekalb on 3/26/2025.
//

#include "Guitar.h"

Guitar::Guitar()
{

}

Guitar::Guitar(int c, int sG, int aW, int nG)
{
    stringGauge = sG;
    ampWattage  = aW;
    numGuitars  = nG;
}

void Guitar::SetGuitarCost()
{
    int guitarCost = 0;

    cout << "Enter how much money you've spent on your guitars: ";
    cin  >> guitarCost;
    SetCost(guitarCost);
}

void Guitar::SetGuitarSpecs()
{
    cout << "Enter what gauge strings you play: ";
    cin  >> stringGauge;

    cout << "How many watts is your amp: ";
    cin  >> ampWattage;

    cout << "How many guitars do you own: ";
    cin  >> numGuitars;
}

void Guitar::DisplaySpecs() const
{
    cout << "I play my guitar with " << stringGauge << " string gauge sizes, "
     << ", amp wattage of "          << ampWattage  << " watts "
     << ", and I own "               << numGuitars  << " guitars "
     << "with cost "                << GetCost()   << endl;
}