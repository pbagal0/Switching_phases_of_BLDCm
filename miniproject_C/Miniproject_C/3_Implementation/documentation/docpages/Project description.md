
#	PROBLEM STATEMENT

� For continuous rotation of BLDC motor at desired speed it is required to know rotor position. For Hall-effect sensors used in BLDC motors, whenever rotor magnetic poles North (N) or South (S) pass near the hall sensor, they generate a HIGH- or Low-level signal, which can be used to determine the position of the shaft. In order to keep the motor running, the magnetic field produced by the winding should shift position as the rotor moves to catch up with the stator field. So for continuous operation of rotor ,decoded commutation sequence obtained from Hall sensor decoder is used to switch phases accordingly and speed of motor is maintained �




#	DESCRIPTION

           Brushless DC motors are very popular in a wide array of applications in industries such as appliances, automotive, aerospace, consumer, medical, industrial automation for its reliability, high efficiency, high power density, low maintenance requirements, lower weight and low cost. As the name implies, BLDC motor do not have brushes for commutation
 A BLDC motor finds numerous applications in motion control. A BLDC motor has windings on stator and alternate permanent magnets on rotor. Electronic commutation of stator windings is based on rotor position with respect to the stator winding. A new generation of microcontrollers and advanced electronics has overcome the challenge of implementing required control functions, making the BLDC motor more practical for a wide range of uses. Hall sensors are mounted on stationary part of motor so as to provide values based on the position of rotor magnets. The BLDC motor can also be driven with predefined commutation interval. But to achieve precise speed control and maximum generated torque, brushless commutation should be done with the knowledge of rotor position. In this project these hall sensor values are used and decoded with the help logic developed with C programming language to obtain which phase of motor and which switch of inverter is operated for particular position of rotor.






