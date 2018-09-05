;
; ADC_read_servo_asm.asm
;
; Created: 28.07.2018 20:46:33
; Author : Kevser BAL
;


.org 0x0000
                   ldi r16,0x01 
                   out  ddrb,r16      ;Define the portb0 as output. it will use for output of adc
                   rcall init_adc     ;initiate the adc
main1   :

                   ldi r16,1
                   out portb,r16   
                   rcall delay_1ms    ; set high portb0 for the first 1ms of 20ms interval 
                   lds    r16,ADCH    ; read the adc
		 
                   ldi    r19,ADCH    ; for completing the interval of 2 milliseconds.
                   sub    r19,r16	    


main2   :                             ;the frequency of atmega328 is 1Mhz,each cycle takes 1 usec.
                   dec r16            ;each loop takes 3 usec 
                   brne main2
main3  :                   
                   ldi r16,0         
                   out portb,r16
                   dec  r19		 
                   brne  main3
		 
		   ldi r16,0
		   out portb, r16
		   rcall delay_18ms
		   rcall delay_100ns
		   rcall delay_100ns
		   rcall delay_100ns

		   rjmp main1

#include "delay_ms.inc"
init_adc : 
           push r16
		   ldi r16, 0x20
		   sts ADMUX,r16      ;8-bits,channel 0 is selected
		   ldi r16,0xe0
		   sts adcsra,r16     ;ADC enable, start conversion,make the conversion continuously for =>1110 0000
		   rcall delay_1ms
		   pop r16
		   ret
