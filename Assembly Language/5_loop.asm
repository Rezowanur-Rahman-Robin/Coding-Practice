.model small
.stack 100h
.data
a db 'Loop Concept $'
.code

main proc
    
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,a
    int 21h 
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov cx,26            ;kotobar loop ghurbe
    mov ah,2
    mov dl,'A'           ;kotha theke suru hobe
    
    level1:
    int 21h
    inc dl               ;ki print hobe
    loop level1          ;kon level ta bar bar hobe
    
    
       
       
    exit:
    mov ah,4ch
    int 21h
    main endp
end main

    
    




