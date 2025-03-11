//Plane.h
#include <list>
#include "EditorMath.h"

class Plane{
public:
    Plane();
    ~Plane();

    std::list<Plane> PlaneIterator;

    vec3 * PlaneVectors;
    float PlanePoints[4];
    vec3 * PlaneNormal;
    float PlaneTexcoords[6];

    int PlaneId;

    virtual void PlaneTexture(Plane * plane, const char * Texture, bool Fit) = 0;

    virtual void PlaneRenderFlags(Plane * plane, double RenderFlags = 0000000000.333333333333) = 0;

    virtual void AllocPlane(Plane * plane) = 0;

    const char * PlaneBuffer(Plane * plane);

    Boolean PlaneScale(Plane * plane);

    Boolean PlaneDrag(Plane * plane);

    Boolean PlaneRotate(Plane * plane);

    void FreePlane(Plane * plane);

    Boolean SelectPlane(Plane * pSel);

    std::size_t PlaneSize;

};