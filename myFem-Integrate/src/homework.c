#include <stdio.h>
#include <math.h>

#ifdef graphic
#include "glfem.h"
#endif



double integrate(double x[3], double y[3], double (*f) (double, double))
{
    double I = sqrt(2);
    double xLoc[3];
    double yLoc[3];

//
// ... A modifier :-)
//
//
// Pour dessiner l'element, les sommets du triangle :-)
// Decommenter la ligne pour dessiner aussi les points d'integration
//


#ifdef graphic

    glColor3f (1.0,1.0,1.0); glfemDrawElement(x,y,3);
    glColor3f (1.0,0.0,0.0); glfemDrawNodes(x,y,3);
//    glColor3f (0.0,0.0,1.0); glfemDrawNodes(xLoc,yLoc,3);
    
#endif

    return I;
}

double integrateRecursive(double x[3], double y[3], double (*f)(double,double), int n)
{

//
// ... A modifier :-)
// y-compris la ligne juste en dessous :-)
//
    double I = integrate(x,y,f);
    
//
//
//    
     
    return I;
}

