
def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        
        for i in range(len(haystack) - len(needle) + 1):  # Fix range to cover all valid starting points
            for j in range(len(needle)):  # Use j instead of i for the inner loop
                if haystack[i + j] != needle[j]:
                    break  # Exit inner loop if a mismatch is found
            else:
                return i 
        return -1  
            
        