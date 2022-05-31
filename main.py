import math
print("Nhap cac thong so theo thu tu: ")
print("a = ")
a = int(input())
print("b = ")
b = int(input())
print("c = ")
c = int(input())
denta = b*b - 4*a*c
def giaiptbac1 (a,b):
    try:
        return print("phuong trinh co nghiem la x=",-b/a)
    except:
        print("Phuong trinh vo nghiem")
try:
    if denta > 0:
        x1 = (-b+math.sqrt(denta))/(2*a)
        x2 = (-b-math.sqrt(denta))/(2*a)
        print("phuong trinh co 2 nghiem thuc: x1=",x1," x2=",x2)
    elif denta == 0:
        x1 = x2 = -b/(2*a)
        print("phuong trinh co nghiem kep: x1= x2=", x1)
    else:
        dentatmp = abs(denta)
        x1r = -b/(2*a)
        x1i = math.sqrt(dentatmp)/(2*a)
        x2r = -b / (2 * a)
        x2i = -math.sqrt(dentatmp)/(2*a)
        x1 = complex(x1r,x1i)
        x2 = complex(x2r,x2i)
        print("phuong trinh co 2 nghiem phuc: x1=",x1," x2=",x2)
except:
    print("a=0 phuong trinh khong phai la phuong trinh bac 2 he thong se giai theo phuong trinh bac 1")
    print (giaiptbac1(b,c))



