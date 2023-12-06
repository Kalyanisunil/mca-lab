rect = lambda length, breadth: length * breadth
square = lambda side: side * side
triangle = lambda height, base: 0.5*height* base
length = int(input("enter the rectangles length:"))
breadth = int(input("enter the rectangles breadth:"))
side = int(input("enter the square side:"))
height = float(input("enter the triangle  height:"))
base = float(input("enter the triangle hreadth:"))
print( "the area of rectangle is:")
print(rect(length, breadth))
print( "the area of square is:")
print(square(side))
print( "the area of triangle is:")
print( triangle(height,base))
# value=lambda height, base: height, base
