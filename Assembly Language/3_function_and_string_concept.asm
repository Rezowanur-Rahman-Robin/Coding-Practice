.model small
.stack 100h         ;memorysize
.data               ;data segment k bujhasse
m db 'Robin Rahman $'               ;m er jonno jototuku jayga dorkar ta db bole dibe
.code               ;code segment k bujhasse

main proc
    
    ; 1-> single key input
    ; 2-> single character output
    ; 9-> character string output
    
    mov ax,@data               ;data is the name of the data segment
    mov ds,ax                  ;data segment initialize
    
    mov ah,9
    lea dx,m                   ;load effective address->lea  dx m er address ta point kortise
    int 21h
    
    
    mov ah,1
    int 21h
    mov bl,al
    
    mov ah,2                   ; ascii 10 means newline
    mov dl,10
    int 21h
    mov dl,13
    
    
    mov ah,2
    mov dl,bl
    int 21h  
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main



