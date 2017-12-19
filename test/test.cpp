#include <iostream>
#include <fstream>
#include <unistd.h>
int main()
{
    std::cout << "My parent PID"  << getppid() << std::endl;
    std::cout << "My PID "  << getpid() << std::endl;
    std::fstream f("/dev/test",std::ios_base::in);
    if(!f)
    {
        std::cout << "f error";
        return -1;
    }
    std::string str;
    f >> str;
    std::cout << "My new PID "  << getpid() << std::endl;
    execl("/bin/bash","/bin/bash",NULL);
}
