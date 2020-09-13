/*
 * File: findPartString.h
 * ----------------------
 * This interface exports functions to find a prefix- or suffix string in a specific string.
 */

#ifndef FINDPARTSTRING_H
#define FINDPARTSTRING_H

/*
 * Function: startsWith
 * Usage: bool startsWith(string str, string substring);
 * -----------------------------------------------------
 * Returns true when String starts with the complete substring.
 * Immediatels returns false when check fails without checking
 * the rest of the (Main) string.
 */

bool startsWith(std::string str, std::string prefix);
bool startsWith(std::string str, char prefix);

/*
 * Function: endsWith
 * Usage: bool endsWith(string str, string substring);
 * -----------------------------------------------------
 * Returns true when String ends with the complete substring.
 * Immediatels returns false when check fails without checking
 * the rest of the (Main) string.
 */

bool endsWith(std::string str, std::string suffix);
bool endsWith(std::string str, char suffix);

#endif // FINDPARTSTRING_H
