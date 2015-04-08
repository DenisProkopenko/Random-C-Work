#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Denis Prokopenko

int main(int argc, char *argv[])
{
  int x;

  //float PI = 3.141592653594;

  float AreaCircle;
  float AreaSquare;
  float AreaEquilateralTriangle;
  float PerimetersCircle;
  float PerimetersSquare;
  float PerimetersEquilateralTriangle;
  float VolumSphere;
  float VolumeCube;
  float VolumeSquarePyramidWithEquilateralTriangularSides;

  printf("Please enter an integer value for X\n");
  scanf("%d",&x);

  printf("\nArea of:\n");
  AreaCircle = M_PI*pow(x,2);
  printf("Circle = %.4f\n",AreaCircle);

  AreaSquare = pow(x,2);
  printf("Square = %.4f\n",AreaSquare);

  AreaEquilateralTriangle = (pow(x,2))/2;
  printf("Equilateral Triangle = %.4f\n\n",AreaEquilateralTriangle);

  printf("Perimeters of:\n");
  PerimetersCircle = 2*M_PI*x;
  printf("Circle = %.4f\n",PerimetersCircle);

  PerimetersSquare = 4*x;
  printf("Square = %.4f\n",PerimetersSquare);

  PerimetersEquilateralTriangle = 3*x;
  printf("Equilateral Triangle = %.4f\n\n",PerimetersEquilateralTriangle);

  printf("Volume of:\n");
  VolumSphere = (4*M_PI*pow(x,3))/3;
  printf("Sphere = %.4f\n",VolumSphere);

  VolumeCube = pow(x,3);
  printf("Cube = %.4f\n",VolumeCube);

  
  VolumeSquarePyramidWithEquilateralTriangularSides = (sqrt(2)/6)*(pow(x,3)) ;
  printf("Square Pyramid With Equilateral Triangular Sides = %.4f\n\n",
  VolumeSquarePyramidWithEquilateralTriangularSides);

  system("PAUSE");
  return 0;
}
/*
Please enter an integer value for X
5

Area of:
Circle = 78.5398
Square = 25.0000
Equilateral Triangle = 12.5000

Perimeters of:
Circle = 31.4159
Square = 20.0000
Equilateral Triangle = 15.0000

Volume of:
Sphere = 523.5988
Cube = 125.0000
Square Pyramid With Equilateral Triangular Sides = 29.4628

Press any key to continue . . .
*/
