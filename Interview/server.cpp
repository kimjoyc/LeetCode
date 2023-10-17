/*
You have nServers number of servers that handle requests in cyclic order using following logic:

The first request is handled by the first server 

The following request are each handled by the server that is not under maintenance and is next from from the server which successfully served the previous REQUEST.

When the last server is reached and you need to find the next server, proceed with the first one.

Also, you have list of strings events. An event can be one of following:

"REQUESTS" -- user request that is passed to a server, the server takes 1 seconds to complete the request.
"UP <i>" -- ith server is manually restarted, the operation takes 0 seconds.

You're also given following info:
workinit -- the number of handled requests by the server after which the server goes down for maintenance, and will be available to handle requests once 


it rests for

recoveryTime seconds or is started manually with UP event

recoveryTime-- number of seconds the server stays under maintenance before automatically being restarted. 

Given logic of how requests are processed

At each step , if server k is up and hasn't reached workinit number of requests, server handles that request. Otherwise, the server passes requests to the next server.


Notes:

When some server k is under maintenance, it should be bypassed during handling requests.

Bypassing the request to the next server takes 0 seconds.

It is guauranteed that there is at least once functioning server to handle request.

It is guaranteed that there is at least one "REQUEST" event.

Return server index that has served the most or the requests in case of a tie return the largest server index.

Note: Solution time complexity should not be more than O(nServers*events.length)

Example:
For nServers = 4, workinit = 1, recoveryTime = 3

and events = [
"REQUEST",
*/

solution(nServers, workinit, recoveryTime, events)
{
  
}
