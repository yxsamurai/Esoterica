#pragma once

//-------------------------------------------------------------------------

#if ESOTERICA_SYSTEM

#define ENKITS_BUILD_DLL

#else

#define ENKITS_DLL

#endif

//-------------------------------------------------------------------------

#define ENKITS_TASK_PRIORITIES_NUM 5

//-------------------------------------------------------------------------

#include "System/Esoterica.h"
#define ENKI_ASSERT EE_ASSERT