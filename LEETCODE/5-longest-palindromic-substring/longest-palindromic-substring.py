class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s or len(s) < 1:
            return ""
        
        start, end = 0, 0
        
        for i in range(len(s)):
            # Check for odd length palindromes (center is at i)
            len1 = self.expandAroundCenter(s, i, i)
            # Check for even length palindromes (center is between i and i+1)
            len2 = self.expandAroundCenter(s, i, i + 1)
            
            max_len = max(len1, len2)
            
            # If we found a longer palindrome, update the start and end pointers
            if max_len > end - start:
                start = i - (max_len - 1) // 2
                end = i + max_len // 2
                
        return s[start:end + 1]

    def expandAroundCenter(self, s: str, left: int, right: int) -> int:
        while left >= 0 and right < len(s) and s[left] == s[right]:
            left -= 1
            right += 1
        # Returns the length of the palindrome found
        return right - left - 1