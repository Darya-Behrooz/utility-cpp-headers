// INCLUDE GUARD
#ifndef STRINGSEARCH_H
#define STRINGSEARCH_H

#include <string>
#include <string_view>
#include <algorithm>
#include <cctype>


// CASE-INSENSITIVE SUBSTRING SEARCH
inline bool searchCaseInsensitive(std::string_view haystack , std::string_view needle)
{
	// MAKE STRINGS LOWERCASE BECAUSE .FIND() IS CASE SENSITIVE
	std::string needleLower(needle);
	std::string haystackLower(haystack);

	std::transform(needleLower.begin() , needleLower.end() , needleLower.begin() , ::tolower);
	std::transform(haystackLower.begin() , haystackLower.end() , haystackLower.begin() , ::tolower);

	// SEARCH STRING
	return haystackLower.find(needleLower) != std::string::npos;
}

#endif