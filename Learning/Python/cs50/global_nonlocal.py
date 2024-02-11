# a = 15
# b = 10

# def add():
#     c = a + b
#     print(c)

# add()

def fun():
    var1 = 10
    def gun():
        nonlocal var1
        # var1 = 11
        var1 = var1 + 10
        print(var1)

    gun()
fun()