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

For finish = 23 and scooters = [7, 4, 14] the output should be solution(finish, scooters) = 19. 

Starting at 0, you find the nearest scooter at point scooters[1]=4, and use all of its resource to get to point 14.

There is another scooter at 14 (scooters[2]=14) which you use to get to end point finish = 23.

Therefore you traveled 10 points on scooter 1 and 9 points on scooter 2, which sums to 10+9=19 points in total.
*/
#include <iostream>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;


int solution(int finish, vector<int>scooters)
{
    int min_dist = *min_element(scooters.begin(),scooters.end());
    int next_scooter;
    for(int i = 0; i < scooters.size(); i++)
    {
        if(scooters[i]<=min_dist+10)
        {
            next_scooter = scooters[i];

        }
        
        next_scooter = scooters[i];
    }
    
    
    finish-=min_dist+10;
    
    if(finish>=10)
    {
        return finish=10; 
    }
    return next_scooter;

}

int main()
{
    vector<int> test_scooters = {15,7,3,10};
    int test_finish=27;
    cout<<solution(test_finish,test_scooters);

    return 0;
}
