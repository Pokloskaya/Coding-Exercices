package Composicion (Automovil);

public class Automovil {
    public Estereo estereo;
    public Motor motor;

    public Automovil(){
        estereo = new Estereo();
        motor = new Motor();
    }

    public void ensamblar(Estereo e, Motor m){
        estereo = e;
        motor = m;
    }
}

public class Motor{

}

public class Estereo{

}