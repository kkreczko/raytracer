#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include "vec3.h"

using Color = Vector_3D;

void writeColor(std::ostream& out, const Color& pixelColor)
{
  double r = pixelColor.getX();
  double g = pixelColor.getY();
  double b = pixelColor.getZ();

  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbyte = int(255.999 * b);

  out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif // !COLOR_H
