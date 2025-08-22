import java.util.*;

public class TrafficLight {
  public static void main(String[] args){

    Scanner s = new Scanner(System.in);
    String color;
     
      System.out.println("Please enter the color of the traffic light: ");
      color = s.nextLine();
      
     switch(color.toLowerCase()) {
         case "red":
              System.out.println("STOP PLEASE, THE LIGHT IS RED");
              break;
          
         case "yellow":
              System.out.println("WAIT PLEASE, THE LIGHT IS YELLOW");
              break;
           
         case "green":
              System.out.println("GO PLEASE,THE LIGHT IS GREEN");
              break;
              
         default:
             System.out.println("PLEASE ENTER A VALID INPUT");
             
             }
    s.close();

 }
}
