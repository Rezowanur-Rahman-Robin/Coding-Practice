include 'emu8086.inc'
.model small
.stack 100h   

.data
 sum1 db 0
 sum2 db 0
 arr  db 6 dub(?) 

  
.code
    main proc
        
        mov ax, @data
        mov ds, ax
        
        
        xor bx, bx
        mov cx, 6 
        
        mov ah, 1
        
        print 'Input: '
        
        Input:
            int 21h
            mov arr[bx], al 
            print ' '
            inc bx    
        loop Input
        
        
        printn
        printn 
        
        print 'Output: '
        
        xor bx, bx 
        mov cx, 6  
        
        mov ah, 2
        
        Output:
            mov dl, arr[bx]  
            int 21h
            print ' '
            inc bx
        loop Output
        
        
        printn
        printn
         
        
        
        print 'Even: '
        xor bx, bx 
        mov cx, 6  
        
        
        Even:
            mov dl, arr[bx]
            inc bx 
            test dl, 01h
            jne Level1   
                
                mov ah, 2
                int 21h
                print ' ' 
                
                sub dl, 48
                add sum1, dl
                
            Level1:
        loop Even 
            
            
        printn
        printn
        
        print 'Odd: '
        xor bx, bx 
        mov cx, 6  
        
        
        Odd:
            mov dl, arr[bx]
            inc bx 
            test dl, 01h
            jne Level2
                jmp Level3
                
            Level2:  
                
                mov ah, 2
                int 21h
                print ' '
                
                sub dl, 48
                add sum2, dl  
                
            Level3:  
                
        loop Odd 
        
        printn
        printn
        
        print 'Even Sum = '
        
        mov ah, 2  
        add sum1, 48
        mov dl, sum1
        int 21h
        
        printn
        printn
        
        print 'Odd Sum = '
        
        mov ah, 2
        add sum2, 48
        mov dl, sum2
        int 21h
        
        printn
        printn
        
    
        exit:
        mov ah, 4ch
        int 21h
    endp
    
end main