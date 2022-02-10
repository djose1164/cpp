/*
4-1. Create a struct TimerClass. In its constructor, record the current time 
in a field called timestamp (compare with the POSIX function gettimeofday).

4-4. Implement a move constructor and a move assignment operator for TimerClass. 
A moved-from TimerClass shouldn’t print any output to the console when it gets destructed.
*/

#include <sys/time.h>
#include <stddef.h>
#include <iostream>

class Timer
{
    timeval timestamp;

    public:
    Timer()
    {
        gettimeofday(&timestamp, NULL);
    }

    Timer(Timer&& other) noexcept
    {
        timestamp = other.timestamp;
        other.timestamp = {0};
    }

    ~Timer()
    {
        timeval current_time;
        gettimeofday(&current_time, NULL);
        std::cout << "Age: " << current_time.tv_usec - timestamp.tv_usec << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Timer timer{};
    size_t x{2048*10000};
    while (x --> 0);
    return 0;
}
