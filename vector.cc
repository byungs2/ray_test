#include "include/vector.h"

vector::Vector
vector::Vector::operator+ (vector::Vector &vector)
{
  return vector::Vector (this->x + vector.x, 
      this->y + vector.y, this->z + vector.z);
}

vector::Vector
vector::Vector::operator- (vector::Vector &vector)
{
  return vector::Vector (this->x - vector.x, 
      this->y - vector.y, this->z - vector.z);
}

vector::Vector
vector::Vector::operator* (double t)
{
  return vector::Vector (this->x * t, this->y * t, this->z * t);
}

vector::Vector
vector::Vector::projectile_z (double t)
{
  double scaler = (t/this->z);
  return vector::Vector (this->x * scaler, this->y * scaler, this->z * scaler);
}
