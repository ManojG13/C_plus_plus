 /*  Cube Volume = side^3
     Sphere Volume = (4/3) * pi * radius^3
     Cone Volume = pi * radius^2 * (height/3) */


#include <iostream>
#include <cmath>

int main()
{
    float v_cube, v_sphere, r_sphere, v_cone, r_cone = 0;

    float cubeSide = 5.4;
    float sphereRadius = 2.33;
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    //volume cube
    v_cube = std::pow(cubeSide, 3);

    //volume_sphere
    r_sphere = std::pow(sphereRadius, 3);
    v_sphere = (4.0/3.0) * M_PI * r_sphere;

    //Volume cone
    r_cone = std::pow(coneRadius, 2);
    v_cone = M_PI * r_cone * (coneHeight/3);

    //print all volumes
    std::cout << v_cube << "\n" << v_sphere << "\n" << v_cone << "endl";
    return 0;
}