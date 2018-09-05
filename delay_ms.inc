;delay_ms.asm


delay_10sn :
      rcall delay_1sn
      rcall delay_1sn	  
      rcall delay_1sn
	  rcall delay_1sn
      rcall delay_1sn
      rcall delay_1sn
      rcall delay_1sn
      rcall delay_1sn
      rcall delay_1sn
	  rcall delay_1sn
	  ret 
delay_1sn :
      rcall delay_250ms
      rcall delay_250ms
	  rcall delay_250ms
	  rcall delay_250ms
	  ret 
delay_250ms:
      rcall delay_50ms
      rcall delay_50ms
	  rcall delay_50ms
	  rcall delay_50ms
	  rcall delay_50ms
	  ret 

delay_50ms:
	  rcall delay_25ms
	  rcall delay_25ms
	  ret 

delay_25ms :
      rcall delay_5ms
      rcall delay_5ms
	  rcall delay_5ms
	  rcall delay_5ms
	  rcall delay_5ms
	  ret 
delay_18ms:
      rcall delay_5ms
      rcall delay_5ms
	  rcall delay_5ms
      rcall delay_1ms
      rcall delay_1ms
	  rcall delay_1ms
	  ret 
	  	        
delay_5ms:
      rcall delay_1ms
      rcall delay_1ms
	  rcall delay_1ms
	  rcall delay_1ms
	  rcall delay_1ms
	  ret

delay_1ms:

	  ldi  r16,99
delay_1ms1:
      nop 
	  nop
	  nop
	  nop
	  nop
	  nop
	  nop
	  dec  r16
	  brne delay_1ms1

	  ret
delay_100ns:
       
	       ldi  r16,9
delay_1:
           nop 
	       nop
	       nop
	       nop
	       nop
	       nop
	       nop
	       dec  r16
	       brne delay_1
	       ret


		  
