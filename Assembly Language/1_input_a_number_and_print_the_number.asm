.model small
.stack 100h
.code

main proc                 ;like main function as in programming has
    mov ah,1              ;for taking integer input
    int 21h
    mov bl,al             ;by default all the data is inside al.so now we are moving al data to bl register
    
    
    mov ah,1              ;2nd input
    int 21h
    mov bh,al
     
    mov ah,2              ;to display
    mov dl,bl
    int 21h
    
    mov ah,2
    mov dl,bh
    int 21h
                          
    exit:                  ;to exit
    mov ah,4ch
    int 21h
    main endp

end main  
    