a=5
b=2
try:
    print("resource is open ")
    print(a/b)
    k=int(input("Enter a number: "))
    print(k)
except ZeroDivisionError as e:# zero type division error
    print("Can't divide a number by zero!",e)
    print("resource is close")
except ValueError as e: # for value type error will handle
    print("invalid error")
except Exception as e: # for all kind of error
    print("something went error!")
finally:
    print("resource is close")