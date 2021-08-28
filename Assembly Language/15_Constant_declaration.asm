.model small
.stack 100h
.data
a equ '2'    ;equ is use for making constant
b equ 'Computer Science and Engineering $' 
c db b     ;string data er jonno fixed akta memory lage.ejonno ekhane define byte(db) use kora hoyese.
.code 
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,1
    int 21h
    mov bl,a          ;const a will not take any data..as it's a constant
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    
    mov ah,2
    mov dl,a 
    int 21h  
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,9
    lea dx,c
    int 21h
    
    exit:
    mov ah,4ch
    main endp
end main



