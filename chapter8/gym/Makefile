hfcal.o: hfcal.c
	gcc -I./includes -c hfcal.c -o hfcal.o

elliptical.o: elliptical.c
	gcc -I./includes -c elliptical.c -o elliptical.o

libhfcal.a: hfcal.o
	ar -rcs ./libs/libhfcal.a hfcal.o

elliptical: elliptical.o libhfcal.a
	gcc elliptical.o -L./libs -lhfcal -o elliptical
