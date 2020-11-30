# cis200Project3
I found this project to be simple. It did not take too long to implement.

## Difficulties
- I had trouble overriding the  operator<< function which I overloaded in the parent Cache class. I think my fundamental problem in implementing this part is a lack of understanding of inheritance and virtual functions. It was working fine until I needed to write a different operator<< function for one of the children classes. I could not get the code to recognize the implementation of the LFUCache class since we were required to use dynamically allocated LFUCache objects that are pointed to buy a Cache pointer. 
- My solution was to create a virtual print function in the Cache class. This made it easier to override in the child classes.
- Later I plan to practice implementing the operator<< function using a simpler set of classes.

## Other
Other than that, the actual implementation of the classes was very simple. I had an smooth time creating this code, and I learned a lot by getting to practice inheritance and polymorphism on a more complicated level such as this program.
