#include<iostream>
using namespace std;

int main(){

    int principle;// Variable to store the principal amount
    int time;// Variable to store the time period
    int rate;// Variable to store the rate of interest

    float SI;//float variable to store the calculated simple interest

    cout<<"Enter principle, time and rate of interest:"<<endl;
    cin>>principle; // Input for principal amount
    cin>>time; // Input for time period
    cin>>rate; // Input for rate of interest

    // Calculate simple interest using the formula SI = (P * T * R) / 100
    SI=(principle*time*rate)/100.0;
    // Output the calculated simple interest
    cout<<"simple interest:"<<SI<<endl;
    // Return 0 to indicate successful execution
    return 0;
}