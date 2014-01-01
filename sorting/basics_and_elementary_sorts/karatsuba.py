"""
Karatsuba Algorithm:
A fast multiplication algorithm that computes the product of two large numbers
x and y within a run time of O(n^1.585) as opposed to O(n^2) of classical multiplication.
"""

def karatsuba(x, y, base=10):
    """returns the product of x, y using the divide and conquer approach."""
    if x < 10 or y < 10:
        return x*y

    # calculates the size of the numbers
    lenx, leny = len(str(x)), len(str(y))
    if lenx < leny: m = lenx/2
    else: m = leny/2

    # x = x1B + x0
    x1 = x / (base**m)
    x0 = x % (x1 * (base**m)
    # y = y1B + y0
    y1 = y / (base**m)
    y0 = y % (y1 * (base**m))

    # 3 calls made to numbers approximately half the size
    z0 = karatsuba(x0, y0, base)
    z2 = karatsuba(x1, y1, base)
    z1 = karatsuba(x0 + x1, y0 + y1, base) -z2 -z0
    return (base**m)*z2 + (base**(m/2))*(z1) + z0
