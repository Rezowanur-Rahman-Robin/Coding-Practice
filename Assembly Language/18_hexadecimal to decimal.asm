.model small
.stack 100h
.data
a db 'Input a hex digit: $'
b db 'In Decimal: $'

.code 

main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,a
    int 21h
    
    mov ah,1
    int 21h
    mov bl,al
    
    sub bl,17d        ;  hex er ascii code theke 17 bad dile decimal er ascii code ta pawa jay
    
    ; in C-> 67-17 =50='2'
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,9
    lea dx,b
    int 21h
    
    mov dl,49d  ;print 1 at the first time
    mov ah,2
    int 21h
    
    mov ah,2
    mov dl,bl
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main
    




