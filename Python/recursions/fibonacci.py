class Fibonacci:
    class at:
        def __init__(self,data):
            self.data = data
            print(self.at(self.data))
        def at(self,data):
            if data == 0 or data == 1:
                return data
            return self.at(data-1)+self.at(data-2)
fibonacci = Fibonacci()
fibonacci.at(5)