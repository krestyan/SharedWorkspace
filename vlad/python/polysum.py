from math import *

def polysum(n, s):
    # A function which returns the sum of the area of a polygon and the square of the perimeter.
    #The function returns the sum, rounded to 4 decimal places.

    area = (0.25 * n * s ** 2) / tan(pi/n) #area calculation
    peri = n * s #perimeter calculation
    poly = area + peri ** 2 # the polysum
    return round(poly, 4)