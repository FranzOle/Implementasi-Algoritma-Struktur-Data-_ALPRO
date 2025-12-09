def faktorial(n):
    if n <= 1:
        return 1
    else:
        return n * faktorial(n - 1)

print("Program Faktorial")

bil = int(input("Masukkan bilangan: "))
print("Faktorial dari", bil, "adalah", faktorial(bil))