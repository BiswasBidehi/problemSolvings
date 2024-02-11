class Dog:
    att1 = "mammal"
    att2 = "dog"

    def fun(self):
        print("I'm a", self.att1)
        print("I'm a", self.att2)

Rodger = Dog()

print(Rodger.att1)
Rodger.fun()
    