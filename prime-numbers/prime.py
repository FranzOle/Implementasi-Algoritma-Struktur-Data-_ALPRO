print("Program Cek Bilangan Prima")

bil = int(input("Masukkan bilangan: "))

if bil < 2:
    print("Bukan bilangan prima")
else:
    bilPrima = True
    k = 2

    while k <=bil - 1 and bilPrima:
        if bil % k == 0:
            bilPrima = False
        else:
            k += 1

    if bilPrima:
        print("Bilangan prima")
    else:
        print("Bukan bilangan prima")
