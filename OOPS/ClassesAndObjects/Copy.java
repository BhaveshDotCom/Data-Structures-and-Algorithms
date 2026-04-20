package OOPS.ClassesAndObjects;

public class Copy {

    public static void main(String[] args) {
        int value = 100;
        Modify objOne = new Modify(value);
        Modify objTwo = new Modify(objOne); // Deep Copy
        Modify objThree = objOne; // Shallow Copy

        System.out.println("1st Object's Value: "+objOne.value);
        System.out.println("2nd Object's Value: "+objTwo.value);
        System.out.println("3rd Object's Value: "+objThree.value);
        System.out.println();
        
        objOne.value = 321;
        objTwo.value = 987;

        System.out.println("1st Object's Value: "+objOne.value);
        System.out.println("2nd Object's Value: "+objTwo.value);
        System.out.println("3rd Object's Value: "+objThree.value);
        
    }
}

class Modify {
    int value;

    Modify(int value) {
        this.value = value;
    }

    Modify(Modify cls){
        this.value = cls.value;
    }
}

