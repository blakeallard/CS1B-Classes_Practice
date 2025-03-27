//
// Created by ekalb on 3/26/2025.
//

#include "MusicGear.h"

MusicGear::MusicGear()
{
    cost = 0;
}

void MusicGear::SetCost(int c)
{
    cost = c;
}

int MusicGear::GetCost() const
{
    return cost;
}

void MusicGear::DisplaySpecs() const
{
    cout << "These are my music gear specifications.\n";
}