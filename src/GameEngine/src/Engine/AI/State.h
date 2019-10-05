#include "BasicCharacter.h"
#ifndef __AISTATE__
#define __AISTATE__

#include "AIEntity.h"

class AIState
{
private:
public:
    AIState();
    virtual void Execute(AIEntity *the_char)=0;
};

#endif // __AISTATE__
