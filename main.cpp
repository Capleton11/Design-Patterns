#include "Infantry.h"
#include "Boatman.h"
#include "Shieldbearer.h"

int main(){
    /* while(war){
        Legions.fight.
    } */

   Infantry* IN = new Infantry(100, 50, 60, 400, "Concaras");
   IN->displayState();
   delete IN;

    return 0;
}