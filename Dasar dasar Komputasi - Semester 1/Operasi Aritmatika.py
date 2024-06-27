#operasi Aritmatika
a=10
b=3

#operasi +
hasil=a+b
print(a,'+',b,'=',hasil)
#operasi -
hasil=a-b
print(a,'-',b,'=',hasil)
#operasi *
hasil=a*b
print(a,'*',b,'=',hasil)
#operasi /
hasil=a/b
print(a,'/',b,'=',hasil)
#operasi ^
hasil=a**b
print(a,'^',b,'=',hasil)
#operasi %
hasil=a%b
print(a,'%',b,'=',hasil)
#operasi //
hasil=a//b
print(a,'//',b,'=',hasil)

#operasi Komparasi > , <, >= , <=, ==, !=
a=4
b=2

print('Lebih besar >')
#lebih besar >
hasil=a>3
print(a,'> 3 =',hasil)
hasil =b>3
print(b,'> 3 =',hasil)

print('Lebih kecil <')
#lebih kecil <
hasil=a<5
print(a,'< 5 =',hasil)
hasil =b<3
print(b,'< 5 =',hasil)

print('Lebih besar sama dengan >=')
#lebih besar sama dengan >=
hasil=a>=4
print(a,'>= 3 =',hasil)
hasil =b>=3
print(b,'>= 3 =',hasil)

print('Lebih kecil sama dengan <=')
#lebih besar >
hasil=a<=3
print(a,'<= 3 =',hasil)
hasil =b<=3
print(b,'<= 3 =',hasil)

print('Sama dengan ==')
#lebih besar >
hasil=a==3
print(a,'== 3 =',hasil)
hasil =b==3
print(b,'== 3 =',hasil)

print('Tidak sama dengan ')
#lebih besar >
hasil=a!=3
print(a,'!= 3 =',hasil)
hasil =b!=3
print(b,'!= 3 =',hasil)

#not, or, and, xor

#not
print ('== Gerbang NOT ')
a=False
c=not a
print('Data a = ', a)
print('Data c= Not a =', a)

#or
print('== Gerbang OR ==')
a=False
b=False
c=a or b
print(a, 'OR ', b, ' = ', c)
a=True
b=False
c=a or b
print(a, 'OR ', b, ' = ', c)
a=False
b=True
c=a or b
print(a, 'OR ', b, ' = ', c)
a=True
b=True
c=a or b
print(a, 'OR ', b, ' = ', c)

#and
print('== Gerbang AND ==')
a=False
b=False
c=a and b
print(a, 'AND ', b, ' = ', c)
a=True
b=False
c=a and b
print(a, 'AND ', b, ' = ', c)
a=False
b=True
c=a and b
print(a, 'AND ', b, ' = ', c)
a=True
b=True
c=a and b
print(a, 'AND ', b, ' = ', c)

#xor
print('== Gerbang XOR =')
a=False
b=False
c=a^b
print(a, 'XOR ', b, ' = ', c)
a=True
b=False
c=a^b
print(a, 'XOR ', b, ' = ', c)
a=False
b=True
c=a^b
print(a, 'XOR ', b, ' = ', c)
a=True
b=True
c=a^b
print(a, 'XOR ', b, ' = ', c)

#prioritas operasi
'''
1. ()
2. exponen
3. perkalian dan temannya *,/,**,%,//
4. pertambahan dan pengurangan
'''

x=3
y=2
z=4

hasil = x ** y * (z + x) / y - y % z // x
print(x, '^',y,'*(',z,' + ',x,')/ ',y,' - '\
      ,y,'%',z,'//',x,'=',hasil)
hasil=x ** 2 + y ** 2 + (x + y - z)
print(x, '^','2','+',y,'^','2','+','(',x,'+',y,'-',z,')','=', hasil)

#Latihan logika komparasi
#?????????? 3 ------- 10 ?????????????

inputUser = float(
input("Masukkan Angka yang bernilai \n \
kurang dari 3 \n atau \n lebih dari 10 \n :"))

isKurangDari = (inputUser < 3)
print("Kurang dari 3 =", isKurangDari)

isLebihDari = (inputUser > 10)
print("Lebih dari 10 =", isLebihDari)

isBenar = isKurangDari or isLebihDari
print('Angka yang anda masukkan : ', isBenar)
