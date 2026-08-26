def square():
    a=[-4,-2,1,6,10]
    for i in range(len(a)):
        a[i]=a[i]*a[i]
    a = sorted(a)
    for i in range(len(a)):
        print (a[i])


square()