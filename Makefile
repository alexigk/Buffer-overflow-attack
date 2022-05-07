# Gekas
# hy255 aksisi 6
all: input9 input6 input3
#############################################################
# input9
input9: createinput9.o
	gcc -o createinput9 createinput9.o
#############################################################
# input6
input6: createinput6.o
	gcc -o createinput6 createinput6.o
#############################################################
# input3
input3: createinput3.o
	gcc -o createinput3 createinput3.o
#############################################################
# createinput9
createinput9.o: createinput9.c
	gcc -c createinput9.c
#############################################################
# createinput6
createinput6.o: createinput6.c
	gcc -c createinput6.c
#############################################################
# createinput3
createinput3.o: createinput3.c
	gcc -c createinput3.c
#############################################################
# kanones gia cleanup
clean:
	rm -rf *.o
	rm -rf input3.txt
	rm -rf createinput3
	rm -rf input6.txt
	rm -rf createinput6
	rm -rf input9.txt
	rm -rf createinput9
#############################################################
