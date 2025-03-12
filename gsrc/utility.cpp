#include "utility.h"

int g_nFlagId = 0;

Utility::Flag Flags;

thread Get_FlagValues(const char * pKey, const char * pValue){
  Flags.FlagGetEpair(pKey, pValue);
};