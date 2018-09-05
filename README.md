# Read_ADC_and_Control_Servo
Control the servo with the analog signal that convereted with analog to digital converter



# Control Servo Motors

Generally, servo motor works in between 0 to 180 degree.The PWM signal must have 20ms intervals to rotate the servo. We use only the first 2ms of the intervals as input and the other part of the signal is always low. When we send the first 1ms as high voltage and the rest as low, the servo goes to 0 degree.Then, if the first 2 ms is high, the servo goes up to 180 degree. Using the values between 1ms and 2ms, it can be rotated between 0 and 180 degree.

<br>

&emsp;   2ms     <br>
&emsp;   |▔▔▔▔|_________________________________       => 180 degree
                 <br>
&emsp;    1.5ms  <br>
&emsp;   |▔▔|_____________________________________       => 90 degree
                 <br>
&emsp;    1ms    <br>
&emsp;   |▔|______________________________________        => 0 degree

&emsp;   <------------------20ms-------------------->




<h2>Subroutines<h2>
  
&emsp;   init_adc is a subroutine for initiation of adc. The delay_ms is written for specific values of time intervals.
