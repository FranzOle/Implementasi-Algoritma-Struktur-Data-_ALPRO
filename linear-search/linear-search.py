print("Program Pencarian \n")

jml = int(input("masukkan jumlah data: "))
data = []

for i in range(jml):
    angka = int(input("Masukkan data ke-{}: ".format(i+1)))
    data.append(angka)

x = int(input("Masukkan data yang dicari: "))
nomr = -1

for i in range(jml):
    if data[i] == x:
        nomr = i
        break

if nomr != -1:
    print("Data ditemukan pada uerutan ke ", nomr)
else:
    print("data tidak ditemukan")

