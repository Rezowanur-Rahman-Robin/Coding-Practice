.model small
.stack 100h
  
.data 

str db 'Array[$'
a db '=$'
b db ']$'
array db 50 dup<?>


main proc
    
    mov ax,@data
    mov ds,ax 
    
    
    
    
    mov si,offset array  
    
    
    mov cx,5 
    
    
    
    input:
    mov ah,1
    int 21h
    mov [si],al 
    
    mov ah,2
    mov dl,' '
    int 21h
    
    inc si
    loop input
    
     
    
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h  
    
    
    
    
    
    mov bh,1
    add bh,48
    
    mov si,offset array
    mov cx,5 
    
    
    output:
    
    mov ah,9
    lea dx,str
    int 21h 
    
    mov ah,2
    mov dl,bh  
    int 21h
    inc bh
    
    mov ah,9
    lea dx,b
    int 21h
    
    mov ah,9
    lea dx,a
    int 21h
    
     
    mov ah,2
    mov dl,[si]  
    int 21h
    
    mov ah,2
    mov dl,' '
    int 21h
    
    inc si
    
    loop output
    
 
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main





