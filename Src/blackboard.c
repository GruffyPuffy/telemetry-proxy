#include "blackboard.h"

#include "cmsis_os.h"

#include <stdio.h>
#include <string.h>


BLACKBOARD theBlackboard;

osMutexId bbMutex;
osMutexDef(bbMutex);


// Init the blackboard
void bbInit(void)
{
    memset(&theBlackboard, 0, sizeof(BLACKBOARD));

    bbMutex = osMutexCreate(osMutex(bbMutex));

}

// Lock/unlock the blackboard to enable writing to it
void bbLock(void)
{
    osMutexWait(bbMutex, osWaitForever);
}

void bbUnlock(void)
{
    osMutexRelease(bbMutex);
}
