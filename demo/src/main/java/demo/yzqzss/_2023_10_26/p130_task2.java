package demo.yzqzss._2023_10_26;

public class p130_task2 {
    public static void main(String[] args){
        Siren.work(new Ambulance());
        Siren.work(new SecurityDoor());
    }
}

interface Alarm{
    void soundAlarming();
}

class Siren {
    public static void work(Alarm alarm){
        alarm.soundAlarming();
    }
}

class Ambulance implements Alarm{
    @Override
    public void soundAlarming(){
        System.out.println("Ambulance is alarming");
    }
}

class SecurityDoor implements Alarm{
    @Override
    public void soundAlarming(){
        System.out.println("SecurityDoor is alarming");
    }
}