# PA5_-GroceryStoreSimulation

http://eecs.wsu.edu/~aofallon/cpts122/progassignments/PA5.htm

Note: parts of this assignment were inspired by Deitel and Deitel’s Supermarket Simulation problem. We’ve all had the pleasant experience of standing in line at the grocery store. As I’m standing in line I’m always trying to figure out if I chose the line with the fastest service. In most cases, I fail miserably. Let’s write a program to simulate two lines in a grocery store, which will allow us to better understand how to select the fastest line.

For this assignment you will need to simulate two lines using queues. This will require that you develop enqueue ( ) (insert), dequeue ( ) (delete), and printQueue ( ) operations for a queue. Although you will instantiate two queues, each one of these will consist of the same kind of queue nodes. Define a queue node in the following manner:

class Data
{
public: // Member functions
private:

     int customerNumber; // Unique identifier; starts at 1; after 24 hours should be reset to 1

     int serviceTime;   // Random time; varies between express and normal lanes; units in minutes

     int totalTime;     // totalTime = serviceTime + sum of serviceTimes of customers in line before this customer; units in minutes

}; // This memory needs to be allocated on the heap!

class QueueNode
{
public: // Member functions
private:
     Data *pData;    // The memory for Data will need to be allocated on the heap as well!

     QueueNode *pNext;

};

You must also define a queue in the following manner:
class Queue
{
public: // Member functions
private:
     QueueNode *pHead;
     QueueNode *pTail;
};

One of your queues will represent the express lane and the other a normal lane. You will randomly generate arrival times and service times of customers into each lane. The express lane has customers arrive every one to five minutes, and customers arrive every three to eight minutes in the normal lane. Service times vary from one to five minutes, and three to eight minutes, for express and normal lane customers, respectively. As customers arrive into each line print out a message indicating in which line each customer arrives, along with the overall corresponding arrival time and customer number. When customers have finished checking out, print out a message indicating which line the customer was in, along the corresponding customer number and totalTime in the line. Allow for the simulation to run for n number of minutes, where n is inputted by the user.

The general program flow is as follows:
Generate a random number between 1 – 5 and 3 – 8 for express and normal lanes, respectively. This represents the arrival time of the first customer into each lane. Set the variable for total time elapsed to 0.
As customers arrive into each line, randomly generate a service time for each. Start processing the customers in the lanes based on service time. Randomly generate the arrival time of the next customer into each line. Elapsed time should be updated by one unit.
As each minute elapses, a new customer may arrive and/or another customer may be done checking out. Display the appropriate messages as described above.
For every 10 minutes, print out the entire queue for each line
Repeat steps 2 through 4 for n minutes of simulation.

Hints: since this is a simulation one minute is really one unit of time. Thus, the incrementing of an integer variable could represent one minute of time elapsing.
