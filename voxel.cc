#include "include/voxel.h"

// need to be thread safe
void 
voxel::Voxel::ref_voxel ()
{
  this->covered_count++;
}

int
voxel::Voxel::get_covered_count ()
{
  return this->covered_count;
}
