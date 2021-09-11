.MODEL SMALL
.STACK
.DATA
X DB 1,2,3,4,5,6,7,8,9,10
MSG DB "Even Sum IS: $"   
MSG1 DB "Odd Sum IS: $"  
arrayEven db 50 dup<?>    
arrayOdd db 50 dup<?>

.CODE
PRIN MACRO
AAM
ADD AX,3030H

MOV DH,AL
MOV DL,AH
MOV AH,02H
INT 21H

MOV DL,DH
MOV AH,02H
INT 21H
ENDM
MAIN PROC
MOV AX,@DATA
MOV DS,AX

MOV DX,OFFSET MSG
MOV AH,09H
INT 21H

mov si,0
mov bl,0 
mov bh,0 

top:
mov ax,0
mov al,x[si]

mov cl,2
div cl
cmp ah,0
jne l1
add bl,x[si]      
jmp incre 

l1: 
add bh,x[si] 
jmp incre

incre:
inc si
cmp si,10
jnz top 



mov ax,0
mov al,bl
PRIN 

    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h 

MOV DX,OFFSET MSG1
MOV AH,09H
INT 21H




mov ax,0
mov al,bh
PRIN 
  
  
mov si,0



mov ah,4ch
int 21h
main endp
end main
MAIN ENDP
END MAIN