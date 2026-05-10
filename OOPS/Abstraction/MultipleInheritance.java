package OOPS.Abstraction;

public class MultipleInheritance {
    public static void main(String[] args) {
        Smartphone smartphone = new Smartphone(); 
        smartphone.clickPhoto();
        smartphone.playMusic();
    }

}

interface Camera {
    void clickPhoto();
}

interface MusicPlayer {
    void playMusic();
}

class Smartphone implements Camera, MusicPlayer {

    public void clickPhoto(){
        System.out.println("Say cheese!");
    }

    public void playMusic(){
        System.out.println("Check out this track");
    }
}
