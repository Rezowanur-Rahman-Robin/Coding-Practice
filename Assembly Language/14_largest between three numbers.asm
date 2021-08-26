.model small
.stack 100h
.code

main proc
    
   
    
    mov ah,1
    int 21h
    mov bl,al
    
    mov ah,1
    int 21h
    mov bh,al
    
    mov ah,1
    int 21h
    mov cl,al
    
    
    
    biggest:
    cmp bl,bh
    jge a
    jmp b
    
    a: 
    cmp bl,cl
    jge d 
    mov ah,2
    mov dl,cl
    int 21h
    jmp exit
    
      
    
    
    b:
    cmp bh,cl
    jge c
    mov ah,2
    mov dl,cl
    int 21h
    jmp exit
    
    c:
    mov ah,2
    mov dl,bh
    int 21h
    jmp exit 
    
    d:
    mov ah,2
    mov dl,bl
    int 21h
    jmp exit
    
    
    
    
    
    exit:
    mov ah,4ch
    main endp
end main

    
    







