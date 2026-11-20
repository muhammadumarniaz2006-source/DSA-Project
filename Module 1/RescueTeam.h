#ifndef RESCUETEAM_H // Yeh header guard hai jo is header ko dobara include hone se rokta hai
#define RESCUETEAM_H // RescueTeam.h ke liye unique header guard define karta hai

#include<iostream> // Input aur output ke liye iostream library include karta hai
using namespace std; // std namespace ke symbols ko seedha use karne deta hai

struct RescueTeam // Rescue team ki maloomat ko represent karne wala structure
{
    int teamID; // Har rescue team ki unique numeric pehchan rakhta hai
    string teamType; // Team ki qism, jaise fire ya ambulance, store karta hai
    string currentLocation; // Team ki maujooda jagah ki maloomat rakhta hai
    bool available; // Team available hai ya nahi, isko true ya false mein rakhta hai
};

#endif // RESCUETEAM_H header guard ka end