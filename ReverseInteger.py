class Solution:
    def reverse(self, x: int) -> int:
        y = str(x)
        if(y[0] == "-"):
            neg = True
        else:
            neg = False
        new_x = ""
        i = len(y) -1
        if neg == False:
            while(i>=0):
                new_x += y[i]
                i -=1
            new_x = int(new_x)
        else:
            while(i>0):
                new_x += y[i]
                i -=1
            new_x = int(new_x) * -1
        
        if(new_x < -(2**31) or new_x > (2**31)):
            return 0
        return int(new_x)