# Part 2 : Spec for Object & Queue
#### Parker Griep & Andrew Colabella

# Object
An object represents our basic data structure and sets the baseline for
how our programs can interact with data.

Goals:
1. The Object should "own" its state, which means it can construct,
manage, and destruct its state.
2. Objects should be able to determine equivalency. By default, this
should be based on memory address.
3. Objects should have some inspective element that can aid in
debugging. The easiest of which is a string representation of the Object.

Notes:
We separate computing the hashcode from returning the hashcode, so that
the result can be memoized.

# Queue
A Queue represents a FIFO (First-in-First-out) sequence of storing data.

Goals:
1. Maintain the invariant of FIFO with its interface. That means you can
only interact with a Queue by enqueueing and dequeueing.
2. Allow for easy interaction in cases where the Queue is empty. This
means it should be easy to check how many elements are in the queue or
if the queue is empty.
3. Allow for easy "peeking" of the next element to be dequeued (if
there is one). We assume this will be a nullptr if the Queue is empty.

Notes:
Efficiency is key here. To enqueue or dequeue should be constant time.

General Notes:
We included a String class purely for our tests with Queue. Feel free to use your own String class, as long as it inherits from Object.
