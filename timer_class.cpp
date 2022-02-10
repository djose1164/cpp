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

#include <cstring>
#include <exception>
#include <iostream>
#include <chrono>

class Timer
{
    chrono::steady_clock::time_point timestamp;
    char *name;
    size_t len;

public:
    /**
     * @brief Construct a new Timer object.
     *
     * @param name is the object's.
     */
    Timer(const char *name) : timestamp{chrono::system_clock::now()}
    {
        if ((len = std::strlen(name) + 1) < 1)
            throw std::runtime_error{"There bust be at least 1 letter!"};
        this->name = new char[++len];
        std::snprintf(this->name, len, "%s", name);
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

    Timer &operator=(Timer &&other) noexcept
    {
        if (this == &other)
            return *this;
        delete timestamp;
        timestamp = other.timestamp;
        other.timestamp = nullptr;
        return *this;
    }

    /**
     * @brief Construct a new Timer object by copy constructor.
     *
     * @param other
     */
    Timer(const Timer &other) : len{other.len}, timestamp{other.timestamp}
    {
        name = new char[other.len];
        std::snprintf(name, len, "%s", other.name);
    }

    /**
     * @brief Copy assignment. The `timestamp` member is shared.
     *
     * @param other is the timer to copy.
     * @return Timer& to the copied object (itself).
     */
    Timer &operator=(const Timer &other)
    {
        if (this == &other)
            return *this;
        delete timestamp;
        timestamp = other.timestamp;
        return *this;
    }

    ~Timer()
    {
        timeval current_time;
        gettimeofday(&current_time, NULL);
        std::cout << name << ":  " << current_time.tv_sec - timestamp->tv_sec << std::endl;
        delete timestamp;
        delete name;
    }
};

void math_stuff(const Timer &timer)
{
    size_t x{1024 * 8};
    size_t y{x * 3};
    while (x-- > 0)
        for (; y; y--)
            ;
}

int main(int argc, char const *argv[])
{
    Timer timer{"A"};
    math_stuff(timer);
    std::chrono::system_clock::now();
    Timer timer2{"B"};
    return 0;
}
