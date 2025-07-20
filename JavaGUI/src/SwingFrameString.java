import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class SwingFrameString extends JFrame
{
    public SwingFrameString()
    {
        JLabel lb1=new JLabel("Enter a String(in caps):");
        JButton b1=new JButton("GO");
        JTextField tf1=new JTextField("",20);
        JLabel result=new JLabel("The result will appear here: ");
        b1.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                String s1=tf1.getText(),
                        str=" ";

    /* for(int i=s1.length()-1;i>=0;i--)
     {
      str+=s1.charAt(i);
     }*/

                for(int i=0;i<s1.length();i++)
                {
                    switch(s1.charAt(i))
                    {
                        case 'A':
                            str+="T";
                            break;
                        case 'T':
                            str+="A";
                            break;
                        case 'G':
                            str+="C";
                            break;
                        case 'C':
                            str+="G";
                            break;
                    }
                    result.setText(str);
                }
            }
        });
        setLayout(new FlowLayout());
        add(lb1);
        add(tf1);
        add(b1);
        add (result);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        pack();
        setVisible(true);
    }
    public static void main(String [] args)
    {
        SwingFrameString frm=new SwingFrameString();
    }
}