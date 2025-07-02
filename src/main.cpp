#include <iostream>
#include "vec3.h"
#include "color.h"

int main()
{
  int imageWidth = 256;
  int imageHeight = 256;

  std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

  for (int j = 0; j < imageHeight; j++)
  {
    std::clog << "\rScanlines remaining: " << (imageHeight - j) << ' ' << std::flush;
    for (int i = 0; i < imageWidth; i++)
    {
      auto pixelColor = Color(
        double(j) / (imageWidth - 1),
        double(j) / (imageHeight - 1),
        0
      );

      writeColor(std::cout, pixelColor);
    }
  }

  std::clog << "\rDone\n";
}
