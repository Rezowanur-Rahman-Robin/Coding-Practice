 
mymacro MACRO x,y
    MOV AX,x  ;
    MOV BX,y  ;
    ADD AX,BX ;
    CALL print_num;
    CALL pthis ;
    DB 13,10, 0 
ENDM 
 
include "emu8086.inc"     
org 100h     
mymacro 1,10
mymacro 3,5        

ret
DEFINE_PRINT_NUM  
DEFINE_PRINT_NUM_UNS;
DEFINE_PTHIS








