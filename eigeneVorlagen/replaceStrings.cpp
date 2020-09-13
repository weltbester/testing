/* 
 * Copyright July 2020, Georg Pohl, 70174 Stuttgart
 * somefile.cpp
 * -------------------
 * The file implements the functions of the
 * replaceString.h interface.
 * {} [] \ |
 */

#include <string>
#include "eigeneVorlagen/ganylib.h"

/*
 * Implementation notes: replaceString
 * -----------------------------------
 * This function browses a given folder and its subfolders.
 * In every found document every 'string 1' is replaced by
 * 'string 2'.
 */

void replaceString(std::string str,
			  const std::string substitute,
			  const std::string with) {
  if (!substitute.empty()) {
    std::size_t pos = 0;
    while ( (pos = str.find(substitute, pos)) != std::string::npos ) {
      str.replace(pos, substitute.length(), with);
      pos += with.length();
    }
  }
} // {} [] \n | ~
