print("\n Program Bubble Sort \n")
jml = int(input("nasukkan jumlah data: "))
data = []

for i in range(jml):
    angka = int(input("Masukkan data ke-{}: ".format(i+1)))
    data.append(angka)

for i in range(jml):
    for j in range(0, jml - i - 1):
        if data[j] > data[j + 1]:
            data[j], data[j + 1] = data[j + 1], data[j]

print("Data bubble sprt:")
for x in data:
    print(x, end=" ")
