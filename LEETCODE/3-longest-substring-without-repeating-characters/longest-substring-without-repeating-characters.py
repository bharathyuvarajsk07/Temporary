class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int: #input type string , output is integer
        substring=set() #for remving duplicated values
        length=0 #intitalise length
        left=0 #start from node 0
        #we move from lt to rt
        for right in range(len(s)):
            #string iterating left to right
            while s[right] in  substring: #if right is already in set , try removing left from set and continue
                substring.remove(s[left])
                left+=1 #start from next element
            substring.add(s[right]) #add the right element into the substr
            length=max(length,right-left+1) #If your window starts at index 2 and ends at index 4 (indices 2, 3, 4), the length is 3,
            #then max compares the best length of the substring vs the current length of the substring
            #after camparison highest value of the substring is set to the length

        return length


        