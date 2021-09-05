.model small
.stack 100h
.code  


main proc 
     
   
mov ah, 1    
int 21h 
mov bl, al 

mov ah,2
mov dl,' '
int 21h 
    
                            
mov ah,1    
int 21h 

    
           
cmp al,bl
je EQUAL     
jmp NOTEQUAL




NOTEQUAL:

mov ah,2
mov dl,10
int 21h
mov dl,13
int 21h 

mov dl, 'n'
mov ah, 2
int 21h
jmp exit

EQUAL: 

mov ah,2
mov dl,10
int 21h
mov dl,13
int 21h


mov dl, 'y'
mov ah, 2
int 21h
jmp exit

exit:
mov ah,4ch
int 21h
main endp
end main