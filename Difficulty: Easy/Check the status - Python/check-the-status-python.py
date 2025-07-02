class Solution:
    def checkStatus(self, a, b, flag):
        if (((a > 0) and (b < 0) or (a < 0) and (b > 0)) and flag == False):
            return True
        elif ((a < 0 and b < 0) and flag == True):
            return True
        else:
            return False