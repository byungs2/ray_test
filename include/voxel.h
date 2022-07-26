#ifndef __VOXEL_H__
#define __VOXEL_H__
#include "vector.h"

namespace voxel
{
  class Voxel
  {
    private:
      vector::Vector center;
      double grid_size;
      int type;
      int covered_count;
    public:
      Voxel ();
      Voxel (double c_x, 
          double c_y, 
          double c_z, 
          double _grid_size,
          int _type) 
        : center(vector::Vector (c_x, c_y, c_z)), 
        grid_size (_grid_size), type(_type) {};
      ~Voxel ();
      void ref_voxel ();
      int get_covered_count ();
  };
}
#endif
