class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s = ""
        for i in range(len(digits)):
            s+= str(digits[i])
        
        num = int(s)
        num += 1
        
        s = str(num)
        l = []
        for i in range(len(s)):
            l.append(int(s[i]))
        
        return l