here I will describe the rubric points: 

## Describe the effect each of the P, I, D components had in your implementation.

From the lecture, I know that the P(proportational), I(integral) and D(differential) components have different contributation to the PID controller output. 

The P components is straitforward to use, but it may cause the car to overshoot, I experimentted this using the simulator and got a result as show in video "videos/PID_only_P.mov", as can been seen, the car oscillates a lot and can not drive the full loop. 

To overcome this, the D component is introduced, which can compensate the overshooting effect. for the simulator, by only adding this, the car can drive the full loop, see video: "videos/PID_full_loop.mov"

the parameter is introduced in below section. 


## Describe how the final hyperparameters were chosen.

To see the effect of each component, I added the parameters one by onethe initial values were chosen from the lecture, which is 
p=0.2, d=3.0, and i=0.004
first using p=0.2, d=0, i=0, found that car can not drive full loop. 
then try p=0.2, d=3.0, i=0, found that the car can now drive the full looop;
then try p=0.2, d=3.0, i=0.004, found that the car can not drive full loop. seems that the i value should be between 0 and 0.004;
then try p=0.2, d=3.0, i=0.0004, the car can now drive the full loop. 

