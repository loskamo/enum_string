#include <iostream>

#include "enum_string.h"

DECLARE_ENUM(LogLevel,  // enum class LogLevel
             Alert,     // LogLevel::Alert
             Critical,  // LogLevel::Critical
             Error,     // LogLevel::Error
             Warning,   // LogLevel::Warning
             Notice,    // LogLevel::Notice
             Info,      // LogLevel::Info
             Debug      // LogLevel::Debug
             );

int main() {
  // serialize
  LogLevel a = LogLevel::Critical;

  std::cout << enum_to_string(LogLevel, a) << std::endl;

  // deserialize
  switch (string_to_enum(LogLevel, "Notice")) {
    case LogLevel::Alert: {
      std::cout << "ALERT" << std::endl;
    } break;
    case LogLevel::Critical: {
      std::cout << "CRITICAL" << std::endl;
    } break;
    case LogLevel::Error: {
      std::cout << "ERROR" << std::endl;
    } break;
    case LogLevel::Warning: {
      std::cout << "WARN" << std::endl;
    } break;
    case LogLevel::Notice: {
      std::cout << "NOTICE" << std::endl;
    } break;
    case LogLevel::Info: {
      std::cout << "INFO" << std::endl;
    } break;
    case LogLevel::Debug: {
      std::cout << "DEBUG" << std::endl;
    } break;
    case LogLevel::MAX: {
      std::cout << "Incorrect value" << std::endl;
    } break;
  }

  return 0;
}
