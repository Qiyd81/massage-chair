# Massage chair, 2014
In this project the teacher required us to create a chair using PVC tubes, the project had to be creative and well documented.
As I knew how to use an Arduino, our group decided to implement a massage box in the backrest of the chair, using motors and adding unbalanced weight to the axis so it would vibrate.


## Budjet & Design
#### First I designed and set the measurements of the pvc tubes so we knew how many meters we needed:
<p align="center">
  <img src="https://github.com/Shilvan/massage-chair/blob/master/resources/design.png" height="400"/>
</p>

#### From the projections, we kept documenting every expense as part of the project deliverables:
<img src="https://github.com/Shilvan/massage-chair/blob/master/resources/budjet.png"/>

## Circuit & Arduino implementation
#### Through my interst in electronics I was able to design the circuit. It receives 5v from the arduino board, hence the use of resistors for the leds as they only need 3.3v, and they are connected to the Arduino through an input pin to show users in what stage the massage is in.
#### There are two buttons that are also connected to the Arduino's input pin so users can choose different modes.
<p align="center">
  <img src="https://github.com/Shilvan/massage-chair/blob/master/resources/circuit.jpeg" height="400"/>
</p>

#### The relay is connected to an Arduino output pin and when it receives the voltage, on state, it serves as a switch to the motors so we can get the vibration.
<img src="https://github.com/Shilvan/massage-chair/blob/master/resources/circuit-top.jpeg" width="40%"/><img src="https://github.com/Shilvan/massage-chair/blob/master/resources/circuit-front.jpeg" width="40%"/>

## End result
#### The whole circuit and arduino board were placed in a box and sewed in place:
<img src="https://github.com/Shilvan/massage-chair/blob/master/resources/chair-profile.jpeg" width="50%"/><img src="https://github.com/Shilvan/massage-chair/blob/master/resources/chair-box.jpeg" width="50%"/>
