.model small
.stack 100h
.data
msg db 3   
msg1 db ?
.code

main proc
    
    mov ax,@data                  ;initialize data
    mov ds,ax
                                  ;ascii value generate korar jonno
    mov ah,2
    add msg,48 
    mov dl,msg
    int 21h 
    
    mov ah,1
    int 21h
    mov msg1,al                   ;by default al register e sob man save thake
    
     
    mov ah,2                     ;for printing new line
    mov dl,10
    int 21h 
    mov dl,13
    int 21h 
    
    mov ah,2
    mov dl,msg1
    int 21h                    
    
    
    exit:
    mov ah,4ch
    int 21h
    main endp

end main
    



