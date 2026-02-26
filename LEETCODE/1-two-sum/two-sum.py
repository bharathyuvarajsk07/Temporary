class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {} #dictionary , key value pairs
        #key:number, value :index
        for i, num in enumerate(nums):    #index,number
            complement = target - num   #taget - number = next number
        
            if complement in seen:   # already if stored means , 
                return [seen[complement], i]   #return current index and already stored complement number
         
            seen[num] = i