;1. display"?", 
;2. read three initials & display them in the middle of an 11 x 11 box of asterix, and 
;3. beep the computer

.model small
.stack 100h
.data
a db '***********',10,13,'$'
b db '****$'
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov dl,'?'        ;print ?
    mov ah,2
    int 21h
    
    
    mov ah,1
    int 21h
    mov bl,al
    
    mov ah,1
    int 21h
    mov bh,al
    
    mov ah,1
    int 21h
    mov cl,al
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,9
    lea dx,a             ;5 lines 11 stars print
    int 21h
    int 21h 
    int 21h
    int 21h 
    int 21h
    
    mov ah,9             ;4 stars
    lea dx,b
    int 21h
    
    mov ah,2             ;first input
    mov dl,bl
    int 21h
    
     
    mov ah,2             ;2nd input
    mov dl,bh
    int 21h
    
     
    mov ah,2             ;3rd input
    mov dl,cl
    int 21h 
    
    mov ah,9             ;4 stars
    lea dx,b
    int 21h     
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,9
    lea dx,a             ;5 lines 11 stars print
    int 21h
    int 21h 
    int 21h
    int 21h 
    int 21h
    
    
    mov ah,2              ;beep sound
    mov dl,007
    int 21h
    
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main

    
     
    
    