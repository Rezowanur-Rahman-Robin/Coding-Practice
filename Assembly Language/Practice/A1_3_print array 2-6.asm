.model small
.stack 100h
.code  
.data 

a dw ?
 
main proc
    
    mov ah,1
    int 21h
    mov a,ax 
    
    
    mov ah,1
    int 21h
    mov bx,ax
    
    
    sub bx,a
     
    
    mov cx,bx 
    inc cx
    
    level:
    
    mov ah,2
    mov dx,a
    int 21h
    inc a
    
    loop level
    
    
 
          
    
    
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main



