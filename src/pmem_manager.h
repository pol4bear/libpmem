//
// Created by pol4bear on 2/12/21.
//

#ifndef LIBPMEM_SRC_PMEMMGR_H_
#define LIBPMEM_SRC_PMEMMGR_H_

#include <cstdio>

namespace pol4b {
class PMemManager {
 public:
  static bool Verbose();
  static void SetVerbose(bool new_state);
  static FILE *OutputFile();
  static void SetOutputFile(FILE *new_output_file);
};
} // namespace pol4b

#endif //LIBPMEM_SRC_PMEMMGR_H_
