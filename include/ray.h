#ifndef __RAY_H__
#define __RAY_H__

#include "voxel.h"
#include "vector.h"

//TODO voxel의 cx cy cz를 배열의 주소로 nomalize할 것임
//Ray의 시작과 끝 vector로 위 cx, cy, cz의 범위를 구해 전체 voxel의
//subset을 구하고, 각 propagation마다 해당 subset과의 hit를 수행할 것임

namespace ray
{
  class Ray
  {
    private:
      vector::Vector origin_v;
      vector::Vector eigen_v;
      vector::Vector current_v;
      vector::Vector start_v;
      vector::Vector end_v;
      double minimum_height;
      double maximum_height;
      double speed;

    public:
      Ray (vector::Vector _origin_v, 
          vector::Vector _eigen_v, 
          double _min,
          double _max,
          double _speed) 
        : origin_v (_origin_v), eigen_v (_eigen_v), current_v (_eigen_v), 
        start_v (_eigen_v.projectile_z (_min)), end_v (_eigen_v.projectile_z (_max)),
        minimum_height (_min), maximum_height (_max), speed (_speed) {}
      ~Ray ();
     
     void ray_propagation ();
     void ray_hit_voxel (voxel::Voxel *voxel);
  };
}

#endif
