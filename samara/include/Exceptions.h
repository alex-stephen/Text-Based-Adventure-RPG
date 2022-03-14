/**
 * @Alex Stephen
 * @date Dec. 5th 2021
 */

#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

#include <stdexcept>

/**
* Exception for an invalid @parameter passed to a constructor or method.
*/
class invalid_parameter_error : public std::runtime_error {
 public:
  /**
  * @param errMessage An error message.
  */
  explicit invalid_parameter_error(const char* errMessage)
      : std::runtime_error(errMessage) {}
};

#endif // EXCEPTIONS_H_INCLUDED
