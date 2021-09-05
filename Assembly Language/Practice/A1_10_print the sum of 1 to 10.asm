include "emu8086.inc"
org 100h
 
MOV CX,5
mov dx,0 
MOV AX,1 

loop1:
    CALL print_num
    CALL pthis 
    DB 13,10,0 
    ADD DX,AX 
    ADD AX,1  
    LOOP loop1  
    
   MOV AX,DX
   CALL print_num
ret
 DEFINE_PRINT_NUM
 DEFINE_PRINT_NUM_UNS
 DEFINE_PTHIS

END  
