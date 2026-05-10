package OOPS.Polymorphism;

// Method Overloading

public class CompileTimePolymorphism {
    public static void main(String[] args) {
        Human human = new Human();
        human.run();
        human.run(true);
    }
    
}

class Human {

    void run(){
        System.out.println("An average human can run at a speed of about 12 km/h under normal conditions.");
    }

    void run(boolean isTired){
        System.out.println("An average human runs at a speed of about 7 km/h when tired.");
    }
}