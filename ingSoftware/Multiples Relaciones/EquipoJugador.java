package Multiples Relaciones;

public class Equipo {
    public java.util.Collection jugadores = new java.util.TreeSet<>();
    //public Jugador jugadores;
    public Jugador capitan;
}

public class Jugador {
    public Equipo juegaEn;
    public Equipo capitanea;
}
