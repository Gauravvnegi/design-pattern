#include "logger.hpp"
#include <iostream>
#include <thread>
#include <bits/stdc++.h>

using namespace std;

void user1() {
    Logger *logger1 = Logger::getIntance();
    logger1->log("This message is from user 1");
}

void user2() {
    Logger *logger2 = Logger::getIntance();
    logger2->log("This message is from user 2");
}

int main() {
    // Start two threads simulating multiple users
    thread t1(user1);
    thread t2(user2);
    
    // Wait for both threads to finish
    t1.join();
    t2.join();

    return 0;
}
