package OOPS.Inheritance;
/*
Problem Statement (PS)

Write a Java program to demonstrate different types of inheritance using a Smart City Transportation System.

Requirements:

1. Create a parent class `Vehicle`
   The `Vehicle` class should contain:

* `brand` of the vehicle
* `vehicleNumber`
* a constructor to initialize both values
* method `startVehicle()` that displays:
  `"Vehicle is ready for the journey"`

2. Create a child class `Car`
   The `Car` class should inherit `Vehicle` and contain:

* `fuelType`
* a constructor that uses `super()` to initialize parent class data
* method `showCarType()` that displays the fuel type

This demonstrates Single Inheritance.

3. Create another child class `ElectricCar`
   The `ElectricCar` class should inherit `Car` and contain:

* `batteryCapacity`
* a constructor that uses `super()`
* method `chargeBattery()` that displays:
  `"Battery is charging..."`

This demonstrates Multilevel Inheritance.

4. Create another child class `Bike`
   The `Bike` class should inherit `Vehicle` and contain:

* `helmetType`
* a constructor that uses `super()`
* method `showHelmetStatus()` that displays the helmet type

This demonstrates Hierarchical Inheritance.

5. In the `main()` method:

* Create an object of `ElectricCar`

* Initialize all values using constructors

* Call:

  * `startVehicle()`
  * `showCarType()`
  * `chargeBattery()`

* Create an object of `Bike`

* Initialize all values using constructors

* Call:

  * `startVehicle()`
  * `showHelmetStatus()`

Input:
No user input required.

Sample Object Values:

For `ElectricCar`:

* Brand: Tesla
* Vehicle Number: DL01EV2026
* Fuel Type: Electric
* Battery Capacity: 75.5 kWh

For `Bike`:

* Brand: Royal Enfield
* Vehicle Number: DL02BK1100
* Helmet Type: Full Face Helmet

Expected Output:

Vehicle is ready for the journey
Fuel Type: Electric
Battery is charging...

Vehicle is ready for the journey
Helmet Type: Full Face Helmet

The program should demonstrate:

* Single Inheritance
* Multilevel Inheritance
* Hierarchical Inheritance
* Constructor Inheritance using `super()`


*/
public class SmartCityTransportationSystem {    
   public static void main(String[] args) {
      ElectricCar ev = new ElectricCar(
         "Mahindra", 
         "23 BH 1234 PA", 
         79, 
         "Electric"
      );

      ev.startVehicle();
      ev.showCarType();
      ev.chargeBattery();

      Bike myBike = new Bike("Royal Enfield", "DL 04 AB 1234","Full Face Helmet");

      System.out.println();
      myBike.startVehicle();
      myBike.showHelmetStatus();
   }
}

class Vehicle {
   String brand;
   String vehicleNumber;

   Vehicle(String brand, String vehicleNumber){
      this.brand = brand;
      this.vehicleNumber = vehicleNumber;
   }

   public void startVehicle(){
      System.out.println("Vehicle is ready for the journey");
   }
}

class Car extends Vehicle {
   String fuelType;

   Car(String brand, String vehicleNumber, String fuelType){
      super(brand, vehicleNumber);
      this.fuelType = fuelType;
   }

   void showCarType(){
      System.out.println("Fuel Type: "+fuelType);
   }

}

class ElectricCar extends Car {
   float batteryCapacity;

   ElectricCar(String brand, String vehicleNumber, float batteryCapacity, String fuelType){
      super(brand, vehicleNumber, fuelType);
      this.batteryCapacity = batteryCapacity;
   }

   void chargeBattery(){
      System.out.println("Battery is charging...");
      System.out.println("Battery Capacity: "+batteryCapacity+"kWh");
   }
}

class Bike extends Vehicle {

   Bike(String brand, String vehicleNumber, String helmetType) {
      super(brand, vehicleNumber);
      this.helmetType = helmetType;
   }

   String helmetType;
   void showHelmetStatus(){
      System.out.println("Helmet Type: "+helmetType);
   }
}