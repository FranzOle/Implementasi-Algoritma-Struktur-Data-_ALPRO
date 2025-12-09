def polinom(a, t):
    n = len(a) - 1
    p = 0
    pangkat = 1
    
    for i in range(n, -1, -1): 

        for j in range(1, i + 1):   
            pangkat = pangkat * t

        p = p + a[i] * pangkat

    return p


print("Program Menghitung Nilai Polinomial")

n = int(input("Masukkan derajat polinom (n): "))

print("Masukan kofisin a sampai a", n, ":")
a = []
for i in range(n + 1):
    x = float(input("a" + str(i) + ": "))
    a.append(x)

t = float(input("Masukkan nilai x (t): "))

hasil = polinom(a, t)

print("Nilai polinom di x =", t, "adalah", hasil)
