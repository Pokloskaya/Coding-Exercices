
import java.lang.Math; 

public class Ecuacionn{
  
  private int [] coeficientes = new int[3];
  public Ecuacionn(int n1, int n2, int n3){
    coeficientes[0] = n1;
    coeficientes[1] = n2;
    coeficientes[2] = n3;   
  }

  public void resolver(){
    int a = coeficientes[0];
    int b = coeficientes[1];
    int c = coeficientes[2];   
  
      System.out.println(Math.pow(b,2));
      double potencia = Math.pow(b,2) - (4*a*c);
      double raiz = Math.sqrt(potencia);
      
      System.out.println(Math.pow(raiz));
  
      double x1 = (-b + raiz) / 2*a;
      double x2 = (-b - raiz) / 2*a;
  
      System.out.println("x1= " + x1);
      System.out.println("x2= " +x2);

  }
}

  public class Main{
    public static void main(String[] args){
      int n1 = 2;
      int n2 = 5;
      int n3 = 3;

      Ecuacion miEcuacion = new Ecuacion(n1, n2, n3);
      miEcuacion.resolver();
    }
  }

  













