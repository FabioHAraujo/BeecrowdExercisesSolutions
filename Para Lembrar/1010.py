def total():
    prod1 = str(input())
    uni1 = float(input())
    value1 = float(input())
    prod2 = str(input())
    uni2 = float(input())
    value2 = float(input())
    total = uni1*value1+uni2*value2

    print ("VALOR A PAGAR: R$ %0.2f" %total)

total()