print("Program Selection Sort")

jml = int(input("Masukkan jumlah data: "))
data = []

for i in range(jml):
    x = int(input("Masukkan data ke-{}: ".format(i + 1)))
    data.append(x)

for i in range(jml - 1):
    imin = i
    for j in range(i + 1, jml):
        if data[j] < data[imin]:
            imin = j

    atem = data[i]
    data[i] = data[imin]
    data[imin] = atem


print("hasil pengurtan:")
for i in range(jml):
    print(data[i], end=" ")
