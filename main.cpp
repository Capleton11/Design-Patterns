#include "Infantry.h"
#include "Boatman.h"
#include "Shieldbearer.h"

int main()
{
    // testing the template method:

    std::list<Soldiers *> n;

    Infantry *IN = new Infantry(100, 50, 60, 400, "Concaras");
    IN->engage();
    IN->disengage();

    n.push_front(IN);

    Boatman *BO = new Boatman(100, 50, 60, 400, "Eugene");
    BO->engage();
    BO->disengage();

    Shieldbearer *SH = new Shieldbearer(100, 50, 60, 400, "Benfleur");
    SH->engage();
    SH->disengage();

    // testing the memento (using the Infantry):

    Memento *INmem = IN->militusMemento();
    INmem->ct->memento.push_front(INmem);
    IN->vivificaMemento(INmem->ct->memento.front());

    // testing the memento (using the Boatman):

    Memento *BOmem = BO->militusMemento();
    BOmem->ct->memento.push_front(BOmem);
    BO->vivificaMemento(BOmem->ct->memento.front());

    // testing the memento (using the Shield):

    Memento *SHmem = SH->militusMemento();
    SHmem->ct->memento.push_front(SHmem);
    SH->vivificaMemento(SHmem->ct->memento.front());

    delete INmem; delete BOmem; delete SHmem;
    delete IN; delete BO; delete SH;

    return 0;
}