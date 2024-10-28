/*28. Find the Index of the First Occurrence in a String
Solved
Easy
Topics
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.*/

#include <string.h>
#include <stdbool.h>

int strStr(char* haystack, char* needle) {
    // Get the lengths of haystack and needle strings
    int sizehaystack = strlen(haystack);
    int sizeneedle = strlen(needle);

    // If needle is an empty string, return 0 as it is found at the start of haystack
    if (sizeneedle == 0) return 0;

    // Iterate through haystack up to the point where needle could fully fit
    for (int i = 0; i <= sizehaystack - sizeneedle; i++) {
        bool found = true; // Flag to check if needle is found at position i

        // Check if all characters in needle match with substring in haystack
        for (int j = 0; j < sizeneedle; j++) {
            if (haystack[i + j] != needle[j]) {
                found = false; // If a character doesn't match, set found to false
                break;         // Exit inner loop early if mismatch is found
            }
        }
        
        // If found remains true, needle is found at index i in haystack
        if (found) return i;
    }
    
    // Return -1 if needle is not found in haystack
    return -1;
}
