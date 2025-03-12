// INCLUDE GUARD
#ifndef STRINGSEARCH_H
#define STRINGSEARCH_H

#include <string>
#include <string_view>
#include <algorithm>
#include <cctype>


// MAKE STRING LOWERCASE
inline std::string stringAllLowercase(std::string_view stringOriginal)
{
	std::string stringLowercase(stringOriginal);
	std::transform(stringLowercase.begin() , stringLowercase.end() , stringLowercase.begin() , ::tolower);

	return stringLowercase;
}

// CASE-INSENSITIVE SUBSTRING SEARCH
inline bool searchCaseInsensitive(std::string_view haystack , std::string_view needle)
{
	// MAKE STRINGS LOWERCASE BECAUSE .FIND() IS CASE SENSITIVE
	std::string needleLower = stringAllLowercase(needle);
	std::string haystackLower = stringAllLowercase(haystack);

	// SEARCH STRING
	return haystackLower.find(needleLower) != std::string::npos;
}

#endif
