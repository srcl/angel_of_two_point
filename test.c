#include <stdio.h>
#include <math.h>
# define M_PI           3.14159265358979323846  /* pi */

int main()
{
    double cx, cy, cx1, cy1;
    cx = 5;
    cy = 5;
    cx1 = 0;
    cy1 = 5;
    
    cx = 5;
    cy = 5;
    cx1 = 10;
    cy1 = 7;
    
    printf("cx:%f cy:%f cx1:%f cy1:%f\n", cx, cy, cx1, cy1);
    
    double angle = atan2(cy - cy1, cx - cx1);
    angle = angle * 180 / M_PI;
    printf("Angle:%f\n", angle);

    return 0;
}
