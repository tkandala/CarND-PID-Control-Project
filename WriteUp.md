# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Reflections

### Parameter Selection

I have started with following values for the simulator:
P = 2
D = 10
I = 0.5

These values come from the lecture notes where Sebastian gets these values after tuning the robot using Twiddle. Although they are not applicable for our simulation, I decided to give them a try and see how the car behaves.

With the above values, the car started to oscillate - increased left and right steering leading to car hitting the sides of the road. Reasons for this behavior can be high P (Proportional Gain) value or I (Integral) values. Also, because the car was initial set to drive at 30mph, it had very little time to compensate for the over-steering effect.

Next I halfed the P and I values to reduce the effect of oscillation and with 20mph speed, the car seemed to better traverse the track but at sharp curves later in the track, the car oversteered and didn't have time to recover.

Then I decreased the speed to 10mph and although this is a low speed, the car controls had the time to compensate for oversteering and get back to the track before it hit the curbs.

### Parameter Tuning

Although I was able to get the car traverse the track without any issues at 10mph, parameter tuning using twiddle would help the car better select parameters at higher speeds.

The way to implement twiddle in this case would be to reset the simulator/car to starting position whenever CTE gets higher. 

### Final parameter values

P = 2
I = 0.5
D = 5