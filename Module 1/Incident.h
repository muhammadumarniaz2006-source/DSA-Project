#ifndef INCIDENT_H // Yeh header guard hai jo duplicate include ko rokta hai
#define INCIDENT_H // Incident.h ke liye unique header guard define karta hai

#include<iostream> // Input aur output ke liye iostream library include karta hai
using namespace std; // std ke symbols ko namespace likhe baghair use karne deta hai

struct Incident // Incident ka structure define karta hai
{
    int id; // Har incident ki unique numeric pehchan store karta hai
    string type; // Incident ki qism, jaise Fire ya Accident, store karta hai
    string location; // Incident hone ki jagah ka naam store karta hai
    int severity; // Incident ki shadeedgi ka numeric level store karta hai
    string status; // Incident ki maujooda halat, jaise Pending, store karta hai
    int arrivalOrder; // Rescue team ke pahunchne ka qismat-e-tarteeb number store karta hai
};

#endif // Incident.h ke header guard ka end