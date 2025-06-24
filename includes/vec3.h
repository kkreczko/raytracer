#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>

class Vector_3D
{
  public:
    double m_Cords[3];

    Vector_3D() : m_Cords{0, 0, 0} {}
    Vector_3D(double x, double y, double z)
      : m_Cords{x, y, z} {}

    double getX() const { return m_Cords[0]; }
    double getY() const { return m_Cords[1]; }
    double getZ() const { return m_Cords[2]; }

    Vector_3D operator-() const { return Vector_3D(-m_Cords[0], -m_Cords[1], -m_Cords[2]); }
    double operator[](int i) const { return m_Cords[i]; }
    double& operator[](int i) { return m_Cords[i]; }

    Vector_3D& operator+=(const Vector_3D& other)
    {
      m_Cords[0] += other.m_Cords[0];
      m_Cords[1] += other.m_Cords[1];
      m_Cords[2] += other.m_Cords[2];
      return *this;
    }

    Vector_3D& operator*=(double t)
    {
      m_Cords[0] *= t;
      m_Cords[1] *= t;
      m_Cords[2] *= t;
      return *this;
    }

    Vector_3D& operator/=(double t)
    {
      return *this *= 1/t;
    }

    double length() const
    {
      return std::sqrt(lengthSquared());
    }

    double lengthSquared() const
    {
      return m_Cords[0] * m_Cords[0] + m_Cords[1] * m_Cords[1] + m_Cords[2] * m_Cords[2];
    }
};

using Point_3D = Vector_3D;

inline std::ostream& operator<<(std::ostream& out, const Vector_3D& v)
{
  return out << v.m_Cords[0] << ' ' << v.m_Cords[1] << ' ' << v.m_Cords[2];
}

inline Vector_3D operator+(const Vector_3D& u, const Vector_3D& v)
{
  return Vector_3D(
      u.m_Cords[0] + v.m_Cords[0],
      u.m_Cords[1] + v.m_Cords[1],
      u.m_Cords[2] + v.m_Cords[2]
  );
}

inline Vector_3D operator-(const Vector_3D& u, const Vector_3D& v)
{
  return Vector_3D(
      u.m_Cords[0] - v.m_Cords[0],
      u.m_Cords[1] - v.m_Cords[1],
      u.m_Cords[2] - v.m_Cords[2]
  );
}

inline Vector_3D operator*(const Vector_3D& u, const Vector_3D& v)
{
  return Vector_3D(
      u.m_Cords[0] * v.m_Cords[0],
      u.m_Cords[1] * v.m_Cords[1],
      u.m_Cords[2] * v.m_Cords[2]
  );
}

inline Vector_3D operator*(double t, const Vector_3D& v)
{
  return Vector_3D(
      v.m_Cords[0] * t,
      v.m_Cords[1] * t,
      v.m_Cords[2] * t
  );
}

inline Vector_3D operator*(const Vector_3D& v, double t)
{
  return t * v;
}

inline Vector_3D operator/(const Vector_3D& v, double t)
{
  return 1 / t * v;
}

inline double dot(const Vector_3D& v, const Vector_3D& u)
{
  return (
      u.m_Cords[0] * v.m_Cords[0] +
      u.m_Cords[1] * v.m_Cords[1] +
      u.m_Cords[2] * v.m_Cords[2]
  );
}

inline Vector_3D cross(const Vector_3D& v, const Vector_3D& u)
{
    return Vector_3D(
        u.m_Cords[1] * v.m_Cords[2] - u.m_Cords[2] * v.m_Cords[1],
        u.m_Cords[2] * v.m_Cords[0] - u.m_Cords[0] * v.m_Cords[2],
        u.m_Cords[0] * v.m_Cords[1] - u.m_Cords[1] * v.m_Cords[0]
    );
}

inline Vector_3D unitVector(const Vector_3D& v)
{
  return v / v.length();
}

#endif // !VEC3_H
