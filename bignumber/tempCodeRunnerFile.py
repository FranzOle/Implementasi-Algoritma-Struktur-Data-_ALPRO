print("Program Mencari Data Terbesar")

n = int(input("Masukkan jumlah data: "))
data = []

for i in range(n):
    x = int(input("Masukkan data ke-{}: ".format(i + 1)))
    data.append(x)

maks = data[0]

for i in range(1, n):
    if data[i] > maks:
        maks = data[i]

print("Data terbesar adalah:", maks)
