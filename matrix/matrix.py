print("Perkalian Matriks")

n = int(input("Masukkan ukuran matriks: "))

A = []
B = []
C = []

print("Input matriks A")
for i in range(n):
    baris = []
    for j in range(n):
        angka = int(input())
        baris.append(angka)
    A.append(baris)

print("Input matriks B")
for i in range(n):
    baris = []
    for j in range(n):
        angka = int(input())
        baris.append(angka)
    B.append(baris)

for i in range(n):
    baris = []
    for j in range(n):
        baris.append(0)
    C.append(baris)

for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] = C[i][j] + A[i][k] * B[k][j]

print("Hasil:")
for i in range(n):
    for j in range(n):
        print(C[i][j], end=" ")
    print()