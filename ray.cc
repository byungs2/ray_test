#include "include/ray.h"

void 
ray::Ray::ray_propagation ()
{
  this->current_v = (this->eigen_v * this->speed) + this->eigen_v;
}

void
ray::Ray::ray_hit_voxel (voxel::Voxel *voxel)
{
  voxel->ref_voxel ();
}
