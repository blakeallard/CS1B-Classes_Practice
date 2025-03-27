//
// Created by ekalb on 3/26/2025.
//

#include "Drums.h"

Drums::Drums()
{
    headSize  = 0;
    stickSize = " ";
    kickSize   = 0;
}

Drums::Drums(int c, double hS, string sS, int kS)
{
    headSize  = hS;
    stickSize = sS;
    kickSize   = kS;
}

void Drums::SetDrumCost()
{
    int drumCost = 0;

    cout << "Enter how much money you've spent on your drums: ";
    cin  >> drumCost;
    SetCost(drumCost);
}

void Drums::SetDrumSpecs()
{
    cout << "Enter your head size: ";
    cin  >> headSize;
    cin.ignore();

    cout << "Enter your stick size: ";
    cin  >> stickSize;

    cout << "Enter your kick size: ";
    cin  >> kickSize;


}


void Drums::DisplaySpecs() const
{
    cout << "Drums head size " << headSize
         << ", stick size "                 << stickSize
         << ", and kick size "              << kickSize
         << " with cost "                   << GetCost()
         << endl;
}