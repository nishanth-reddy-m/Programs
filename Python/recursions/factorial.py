class Factorial:
    def __init__(self,data):
        self.data = data
    def fact(self,num):
        if num == 1:
            return 1
        elif num < 1:
            return 0
        return num*self.fact(num-1)
    def __int__(self):
        return self.fact(self.data)
    def __str__(self):
        return f'Factorial of {self.data} is {self.fact(self.data)}'

n = int(input('Enter the number: '))
print(Factorial(n))