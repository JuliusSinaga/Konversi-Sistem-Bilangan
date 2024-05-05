compile:
	gcc Konversi_Bilangan.c ./Sistem/Sistem_Heksa.c ./Sistem/Sistem_Oktal.c ./Sistem/Sistem_Binary.c -o konversi -Wall

test :
	./konversi