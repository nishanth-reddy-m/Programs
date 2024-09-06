class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        v = x
        n = 0
        while v:
            n = n*10+(v%10)
            v //= 10
        if x == n:
            return True
        return False
sol = Solution()
n = int(input('Enter the number: '))
print(sol.isPalindrome(n))