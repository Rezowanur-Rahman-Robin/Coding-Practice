.model small
.stack 100h
.data
a db 'Input first digit $'
b db 10,13,'Input second digit $'
c db 10,13,'Result $'
.code
 
main proc
    mov ax,@data             ;by default al er moddhe thakto.kintu amra boro value rakhar jonno..data segment take al a na rekhe ax e rekhe dissi.
    mov ds,ax
    
    mov ah,9
    lea dx,a
    int 21h
    
    mov ah,1
    int 21h
    mov bl,al
    
    mov ah,9
    lea dx,b
    int 21h
    
    mov ah,1
    int 21h
    mov bh,al
    
    mov ah,9
    lea dx,c
    int 21h
    
    sub bl,bh       ; bl = bl-bh 
    add bl,48       ;ascii value theke accurate value ta pawar jonno
    mov ah,2
    mov dl,bl
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main









