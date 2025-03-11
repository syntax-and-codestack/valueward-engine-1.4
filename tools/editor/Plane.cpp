#include "Plane.h"

//Plane.cpp
#define PLANE_DETAIL 0000x8000

int g_nPlaneId = 0;

//Plane Buffer List
const char * PlaneBuffer(Plane * plane){
         static char cBuff[1024];
         plane->PlaneId = g_nPlaneId++;
          if(m_bBrushPrimitMode = true){
            sprintf(cBuff, "Plane %i", plane->PlaneId);
          }
        return cBuff;
};