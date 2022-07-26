#ifndef __VECTOR_H__
#define __VECTOR_H__

namespace vector 
{
  class Vector 
  {
    private:
     double x;
     double y;
     double z;
    
    public:
      Vector (double _x, double _y, double _z) : x(_x),
      y(_y), z(_z) {};
      ~Vector ();
      Vector operator+ (Vector &vector);
      Vector operator- (Vector &vector);
      Vector operator* (double t);
      Vector projectile_z (double t);
      int distance (Vector &vector);
  };
}

#endif
