/*
Problem Statement (PS)
Write a Java program to demonstrate Inheritance using a smart device system.

Create:
A parent class Device containing:
device brand
method powerOn()

A child class SmartWatch that inherits Device and contains:
fitness tracking feature
method monitorHeartRate()()

In the main() method:
Create an object of SmartWatch
Access both inherited and child class methods
*/

package OOPS.Inheritance;

public class InheritanceConcept {
    public static void main(String args[]){
        SmartWatch iWatch = new SmartWatch("Apple Watch Ultra 3");
        System.out.println(iWatch.deviceName);
        iWatch.powerOn();
        iWatch.monitorHeartRate(72);
    }
}

class Device {
    String deviceName;

    Device(String deviceName){
        this.deviceName = deviceName;
    }

    public void powerOn(){
        System.out.println("Device is powering on...");
    }
}  

class SmartWatch extends Device {

    SmartWatch(String deviceName) {
        super(deviceName);
    }

    public void monitorHeartRate(int heartRate) {
        if(heartRate < 0){System.out.println("Heart Rate cannot be negative");}
        else if(heartRate < 60){System.out.println("Low Heart Rate");}
        else if(heartRate <= 100){System.out.println("Normal Heart Rate");}
        else if(heartRate > 100){System.out.println("High Heart Rate");}
        else System.out.println("Invalid Input");
    }
}


