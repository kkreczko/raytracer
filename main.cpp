#include <iostream>

int main()
{
  int imageWidth = 256;
  int imageHeight = 256;

  std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

  for (int j = 0; j < imageHeight; j++)
  {
    for (int i = 0; i < imageWidth; i++)
    {
      double r = double(j) / (imageWidth - 1);
      double g = double(i) / (imageHeight - 1);
      double b = 0.0;

      int ir = int(255.999 * r);
      int ig = int(255.999 * g);
      int ib = int(255.999 * b);

      std::cout << ir << ' ' << ig << ' ' << ib << '\n';
    }
  }
}
