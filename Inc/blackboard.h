#ifndef BLACKBOARD_H_INCLUDED
#define BLACKBOARD_H_INCLUDED

#include <stdint.h>

#ifdef __cplusplus
 extern "C" {
#endif

// This is a "glorified" global variable...but all kept in a blackboard

typedef struct _BLACKBOARD_s
{
    uint8_t allSystemsGo;
    uint8_t cdcOnline;
} BLACKBOARD;


extern BLACKBOARD theBlackboard;

// Init the blackboard
extern void bbInit(void);

// Lock/unlock the blackboard to enable writing to it
extern void bbLock(void);
extern void bbUnlock(void);


#ifdef __cplusplus
}
#endif


#endif /* BLACKBOARD_H_INCLUDED */
