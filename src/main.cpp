#include <iostream>
#include "vec3.h"
#include "color.h"

int main()
{
  double aspect_ratio = 16.0 / 9.0;
  int image_width = 400;

  int image_heigth = int(image_width / aspect_ratio);
  image_heigth = (image_heigth < 1) ? 1 : image_heigth;

  double viewport_height = 2.0;
  double viewport_width = viewport_height * (double(image_width) / image_heigth);

  return 0;
}
