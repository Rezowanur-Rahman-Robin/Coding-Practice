.model small
.stack 100h
.code

main proc
    
    mov ah,1                  ;input first number into bl
    int 21h
    mov bl,al
    
    mov ah,2                  ;display function
    mov dl,10                 ;ascii code of 10 is new line
    int 21h
    mov dl,13                 ;carries return  
    int 21h                   ;print newLine = ascii 10 + ascii 13
    
    mov ah,1                  ;input second number into bh
    int 21h
    mov bh,al
                              ;print new line
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
                              ;output 1st number
    mov ah,2
    mov dl,bl
    int 21h
                              ;print new line
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,2                  ;output 2nd number
    mov dl,bh
    int 21h
    
    mov ah,2                  ;making beep sound
    mov dl,07
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main
    
    
    




