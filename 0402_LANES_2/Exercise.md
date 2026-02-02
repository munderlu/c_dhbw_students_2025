# Exercise

We will extens the self-driving car use-case from the *0003_CONTROL_FLOW/LANES_1*.
For this exercise, we will edit the following files:

- AdFunctions.h
- AdFunctions.c
- AdTypes.h

Content of AdFunctions.c/h:

- The ``printScene`` function that prints out the console output from exercise **0003_CONTROL_FLOW/LANES_1**

Content of AdTypes.h:

- ``enum LaneAssociationType``: for lane association (left, center, right)
- ``enum LongitudinalAction``: for acceleration or deceleration action (or none)
- ``enum LateralAction``: for lane change action (to left or right, or none)

Also we will add the option that the user can decide whether to change the lane and to accelerate or decelerate the car.

For this implement the following function.
After processing the user input, do a lane change and adapt the vehicle speed regarding the input:

- ``getUserInput``
- ``handleLateralUserInput``
- ``handleLongitudinalUserInput``

The acceleration/deceleration is applied by increasing/reducing the current speed ($\frac{m}{s}$) by 5%.

Note:

Don't forget to use include guards!

## Example Output

```bash

Create the properties of a vehicle.
Speed in m/s: 10
Lane (1=Left, 2=Center, 3=Right): 2

```

```bash


          L   C   R
        |   | V |   |

Speed: 10.000000


LongAction (w=Increase, s=Decrease): s
LateralAction (a=Left, d=Right): d

```
