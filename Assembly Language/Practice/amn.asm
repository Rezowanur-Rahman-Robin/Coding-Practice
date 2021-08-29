include 'emu8086.inc'
 
org 100h
 
print 'enter num :'
CALL scan_num
MOV AX,CX
printn
print 'number is :'
CALL print_num
printn

print 'enter Character :'
MOV AH,1
INT 21H
MOV DL,AL
printn
print 'character is :'
MOV AH,2
INT 21H
printn

print 'Enter string :'
CALL GET_STRING
printn
print 'The string is: '
CALL PRINT_STRING

DEFINE_GET_STRING
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_PTHIS
END



