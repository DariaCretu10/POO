#include <exception>

class NonBinary : public std::exception {
    const char* what_arg;
public:
  NonBinary(const char* what_arg) noexcept {
    this->what_arg = what_arg;
  }
  ~NonBinary() noexcept {};

  const char* what() const noexcept {
    return this->what_arg;
  }
};
