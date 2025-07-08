#User function Template for python3
def find_minimum(a, b):
    num1 = a + b;
    num2 = a - b;
    num3 = a * b;
    try:
        num4 = a / b
    except:
        return min(num1, num2, num3)
    else:
        return min(num1, num2, num3, num4)
    finally:
        pass