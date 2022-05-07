# Buffer-overrun-attack
Program represantation in memory, stack format and usage, security issues that exist in current systems.

Tested on `gcc version 4.9.2`


# **Articles**<br>
Illegal buffer overrun attack is shown in articles: Article 2(Illegal Access), Article 4(Data Interference), Article 5(System Interference), Article 8(Computer related fraud).

# **Build**<br>
```sh
# build the binaries
$ make all
# create the respective input
$ ./createinput{3,6,9} > input{3,6,9}.txt
# test the explot
$ ./hello < input{3,6,9}.txt 
# clean up the executables
$ make clean
```
