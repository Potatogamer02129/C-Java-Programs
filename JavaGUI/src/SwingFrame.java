import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class SwingFrame extends JFrame
{
    //JLabel lb1,lb2,result;
    //JTextField tf1,tf2;
    //JButton b1;
    public SwingFrame()
    {
        JLabel lb1=new JLabel("Enter a number: ");
        JLabel lb2=new JLabel("Enter a number: ");
        JTextField tf1=new JTextField("0");
        JTextField tf2=new JTextField("0");
        JButton b1=new JButton("ADD");
        JLabel result=new JLabel("Result will Appear here: ");
        b1.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                int n1,n2;
                n1=Integer.parseInt(tf1.getText());
                n2=Integer.parseInt(tf2.getText());
                result.setText(Integer.toString(n1+n2));
            }
        });
        Container cp=getContentPane();
        cp.setLayout(new GridLayout(3,3,5,5));
        cp.add(lb1);
        cp.add(tf1);
        cp.add(lb2);
        cp.add(tf2);
        cp.add(b1);
        cp.add(result);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        pack();
        setVisible(true);
    }
    public static void main(String [] args)
    {
        SwingFrame frm=new SwingFrame();
    }
}