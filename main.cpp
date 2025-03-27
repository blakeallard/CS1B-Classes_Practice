#include "Drums.h"
#include "Guitar.h"


int main()
{
    Drums  drum;
    Guitar guitar;


    drum.SetDrumCost();
    guitar.SetGuitarCost();

    drum.SetDrumSpecs();
    guitar.SetGuitarSpecs();

    drum.DisplaySpecs();
    guitar.DisplaySpecs();


    return 0;
}