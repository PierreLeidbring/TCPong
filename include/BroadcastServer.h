#ifndef BROADCASTSERVER_H
#define BROADCASTSERVER_H

#include <SFML/Network.hpp>
#include <thread>
#include <iostream>
#include <string>

#define BROADCAST_PORT 26385

class BroadcastServer
{
    public:
        BroadcastServer();
        ~BroadcastServer();
        void sendBroadcast();
        void listenForBroadcast();
    private:
        sf::UdpSocket listener;
        sf::IpAddress myAddress;
        sf::IpAddress broadcastAddress;
        std::thread t1;
};

#endif //SERVER_H