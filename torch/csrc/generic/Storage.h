#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/Storage.h"
#else

#include "torch/csrc/StorageDefs.h"

THP_API PyObject * THPStorage_(New)(THWStorage *ptr);
extern PyObject *THPStorageClass;

#ifdef _THP_CORE
#include "torch/csrc/Types.h"

bool THPStorage_(init)(PyObject *module);
void THPStorage_(postInit)(PyObject *module);

extern PyTypeObject THPStorageType;
#endif

#endif
