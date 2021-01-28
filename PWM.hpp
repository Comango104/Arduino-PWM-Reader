#include <Arduino.h>

class PWM {
    byte my_isr;
    
public:
    PWM(byte pin);
    
    /**
     Enables interrupt.
     @param measure_pulse_high true: High Pulse duration is measured (normal pwm), false: Low Pulse duration is measured (inverted pwm).
     
     @return 0 Success.
     @return -1 Error.
     */
    int begin();
    
    /**
     Returns the most recent on PWM value received.
     @return on PWM duration in microseconds.
     */
    unsigned int getOnValue();
    
    /**
     Returns the most recent off PWM value received.
     @return off PWM duration in microseconds.
     */
    unsigned int getOffValue();
	
    /**
     Returns the period of the last pwm cycle.
     @return PWM period in microseconds.
     */
    unsigned int getPeriod();
	
    /**
     Returns the on duty percentage of the last PWM
     @return PWM on duty percentage.
     */
    unsigned int getOnDuty();
	
    /**
     Returns the off duty percentage of the last PWM
     @return PWM off duty percentage.
     */
    unsigned int getOffDuty();
	
    /**
     Returns the on age of recent PWM value.
     @return on Age in microseconds.
     */
    unsigned long getOnAge();
    
    /**
     Returns the off age of recent PWM value.
     @return off Age in microseconds.
     */
    unsigned long getOffAge();
    
    /**
     Disables interrupt.
     */
    void end();
};
