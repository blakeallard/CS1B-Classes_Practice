//
// Created by ekalb on 3/26/2025.
//

#ifndef MUSICGEAR_H
#define MUSICGEAR_H

#include <iostream>
using namespace std;

class MusicGear
{
private:
    int cost;

public:
    MusicGear();

    void SetCost(int c);
    int  GetCost() const;
    void DisplaySpecs() const;
};



#endif //MUSICGEAR_H
