#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class Ray {
  public:
    Ray() {}

    Ray(const Point_3D& origin, const Vector_3D& direction)
      : m_Origin{origin}, m_Direction{direction} {}

    const Point_3D& getOrigin() const { return m_Origin; }
    const Vector_3D& getDirection() const { return m_Direction; }
  
    Point_3D at(double t) const {
      return m_Origin + t * m_Direction;
    }

  private:
    Point_3D m_Origin;
    Vector_3D m_Direction;
};

#endif
