import javax.swing.*;
import java.awt.*;

public class Main {
    public static void main(String[] args) {
        ImageIcon image = new ImageIcon("/home/potatogamer/Pictures/wallpaper1.png");
        JLabel label = new JLabel("Hello World!");
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.TOP);
        label.setForeground(new Color(0x00FF00));
        label.setBackground(new Color(0x12345));
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setOpaque(true);
        label.setFont(new Font("MV Boli",Font.BOLD,20));
        label.setIcon(image);
        myFrame frame = new myFrame();
        frame.add(label);
        frame.pack();
    }
}