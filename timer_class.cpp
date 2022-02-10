/*
4-1. Create a struct TimerClass. In its constructor, record the current time
in a field called timestamp (compare with the POSIX function gettimeofday).

4-2. In the destructor of TimerClass, record the current time and subtract the
time at construction. This time is roughly the age of the timer. Print this value.

4-3. Implement a copy constructor and a copy assignment operator for TimerClass.
The copies should share timestamp values.

4-4. Implement a move constructor and a move assignment operator for TimerClass. 
A moved-from TimerClass shouldn’t print any output to the console when it gets destructed.

4-5. Elaborate the TimerClass constructor to accept an additional const char* name parameter.
When TimerClass is destructed and prints to stdout, include the name of the timer in the output.

4-6. Experiment with your TimerClass. Create a timer and move it into a function
that performs some computationally intensive operation (for example, lots of math in a loop). 
Verify that your timer behaves as you expect.

4-7. Identify each method in the SimpleString class (Listing 4-38). Try reimplementing it
 from scratch without referring to the book.
*/

#include <sys/time.h>
#include <stddef.h>
#include <iostream>

class Timer
{
    timeval *timestamp;

public:
    /**
     * @brief Construct a new Timer object.
     * 
     */
    Timer(): timestamp{new timeval}
    {
        gettimeofday(timestamp, NULL);
    }

    /**
     * @brief Construct a new Timer object by move constructor.
     * 
     * @param other is the rvalue.
     */
    Timer(Timer &&other) noexcept
    {
        timestamp = other.timestamp;
        other.timestamp = nullptr;
    }

    /**
     * @brief Construct a new Timer object by copy constructor.
     * 
     * @param other 
     */
    Timer(const Timer& other)
    {
        timestamp = other.timestamp;
    }
    
    ~Timer()
    {
        timeval current_time;
        gettimeofday(&current_time, NULL);
        std::cout << "Age: " << current_time.tv_usec - timestamp->tv_usec << std::endl;
        delete timestamp;
    }
};

int main(int argc, char const *argv[])
{
    Timer timer{};
    size_t x{2048 * 10000};
    while (x-- > 0)
        ;
    return 0;
}
