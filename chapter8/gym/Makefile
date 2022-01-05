hfcal.o: hfcal.c
	gcc -I./includes -c -fPIC hfcal.c -o hfcal.o

libhfcal.so: hfcal.o
	gcc -shared hfcal.o -o ./libs/libhfcal.so

elliptical.o: elliptical.c
	gcc -I./includes -c elliptical.c -o elliptical.o

elliptical: elliptical.o libhfcal.so
	gcc elliptical.o -L./libs -lhfcal -o elliptical
