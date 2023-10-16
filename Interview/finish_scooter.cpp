/*
Imagine that you are standing at the starting point of a straight street and are trying to reach the end of the street. The street is represented by a
number line starting at 0 and ending at finish (finish > 0).

There are electric scooters scattered along to help you get to the end. Specifically, the scooters are represented by an array scooters, with scooters[i]
representing the location of ith scooter.

Each scooter can travel up to 10 points along the number line before its battery is fully discharged and it cannot go further. For example, if a scooter
is located at point 5.

It can travel to points 5,6,7, ... up to point 15(inclusive), but it cannot get to point 16 or further.

To get to the end point of the street, you must use the following algorithm:

1. From the current position, travel to the nearest scooter to the right on foot. If there are no more scooters available, travel to the end point on foot.

2. Get on this scooter and use all of its battery/resources to travel as far as you can toward the end point. 

3. If you still haven't reached the end point, repeat the process from step 1.

Given that you must use the algorithm described above to travel from starting point of the street 0 to the end of the point street finish, your task is to return
the total distance you will travel on scooters.

Note: You are not expected to provide the most optimal solution, but a solution with a time complexity not worse than O(scooters.length*finish) will fit in the execution time limit.


Example: 
*/
