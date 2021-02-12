//
// Created by pol4bear on 2/12/21.
//

#include "pmem_manager.h"

using namespace pol4b;

namespace pol4b {
class PMemManagerImplement {
 private:
  bool verbose_;
  FILE *output_file_;
  PMemManagerImplement() : verbose_(false), output_file_(stdout) {}

 public:
  bool Verbose() {
    return verbose_;
  }

  void SetVerbose(bool new_state) {
    verbose_ = new_state;
  }

  FILE *OutputFile() {
    return output_file_;
  }

  void SetOutputFile(FILE *new_output_file) {
    output_file_ = new_output_file;
  }

  static PMemManagerImplement &instance() {
    static PMemManagerImplement instance_;
    return instance_;
  }
};
} //namespace pol4b

bool pol4b::PMemManager::Verbose() {
  return PMemManagerImplement::instance().Verbose();
}
void pol4b::PMemManager::SetVerbose(bool new_state) {
  PMemManagerImplement::instance().SetVerbose(new_state);
}

FILE *pol4b::PMemManager::OutputFile() {
  return PMemManagerImplement::instance().OutputFile();
}

void PMemManager::SetOutputFile(FILE *new_output_file) {
  PMemManagerImplement::instance().SetOutputFile(new_output_file);
}
