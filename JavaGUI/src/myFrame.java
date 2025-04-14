import javax.swing.*;
import java.awt.*;

public class myFrame extends JFrame {
    myFrame(){
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
        this.setTitle("JFrame Title");
        this.setSize(500,500);
        this.getContentPane().setBackground(new Color(123,50,250));
    }
}
