.MODEL SMALL
.STACK 100H
.DATA
    msg db 'Hello World!$'

.CODE
MAIN PROC
    ; Initialize data segment
    MOV AX, @DATA
    MOV DS, AX
    
    ; Display the message
    MOV AH, 9       ; DOS function to display string
    LEA DX, msg     ; Load address of message
    INT 21H         ; Call DOS interrupt
    
    ; Exit program
    MOV AH, 4CH     ; DOS function to exit
    INT 21H         ; Call DOS interrupt
    
MAIN ENDP
END MAIN
