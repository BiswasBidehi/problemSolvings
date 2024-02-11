var1 = 5

def fun1():
    
    var2 = 6
    def fun2():
        var3 = 7
        print(var3)
    fun2()
    print(var2)
fun1()
print(var1)