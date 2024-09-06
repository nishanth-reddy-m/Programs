class Solution:
    def romanToInt(self, s: str) -> int:
        hashtable = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        value = hashtable[s[0]]
        for i in range(1,len(s)):
            if s[i-1] == 'I':
                if s[i] == 'V':
                    value += 4 - 1
                    continue
                elif s[i] == 'X':
                    value += 9 - 1
                    continue
            elif s[i-1] == 'X':
                if s[i] == 'L':
                    value += 40 - 10
                    continue
                if s[i] == 'C':
                    value += 90 - 10
                    continue
            elif s[i-1] == 'C':
                if s[i] == 'D':
                    value += 400 - 100
                    continue
                if s[i] == 'M':
                    value += 900 - 100
                    continue
            value += hashtable[s[i]]
        return value
sol = Solution()
s = input('Enter the roman number: ')
print(sol.romanToInt(s))
            
