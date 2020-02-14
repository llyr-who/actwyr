Idea 1:

    Thread 0 - Command Line - where the user enters tasks
    Thread 1 - Request Q - where tasks are stored
    Thread 2 - Where all the agents live

Thread 0 and 1 can be merged, so we have a classical producer-consumer relationship.

Regardless whether or not this idea works (first ideas are pretty much always shit),
we need to establish an interface for the user. So 

Task 1 : establish command line interface :)
