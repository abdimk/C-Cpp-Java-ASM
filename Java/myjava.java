import javax.swing.JOptionPane;

public class myjava {
    public static void main(String[] args){
        String name = JOptionPane.showInputDialog("Enter your name:");
        int age = Integer.parseInt(JOptionPane.showInputDialog(null, "Enter your age:"));
        double height = Double.parseDouble(JOptionPane.showInputDialog(null, "Enter your height:"));


        String message = "Name: "+name+"\nAge: "+age+"\nHeight: "+height;
        JOptionPane.showMessageDialog(null, message);

    }
}
