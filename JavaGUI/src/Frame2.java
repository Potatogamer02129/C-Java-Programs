import java.awt.*;
import java.awt.event.*;
public class Frame2 extends Frame
{
    Label lb1,lb2,result;
    TextField tf1,tf2;
    Button b1;
    public Frame2()
    {
        setLayout(new GridLayout(3,3));
        addWindowListener(new WindowAdapter ()
        {
            public void windowClosing(WindowEvent e)
            {
                //super.windowClosing(event e
                System.exit(1);
            }
        });
        lb1=new Label("Enter a number: ");
        lb2=new Label("Enter a Number: ");
        tf1=new TextField("0");
        tf2=new TextField("0");
        b1=new Button("Add");
        result=new Label("Result will appear here");
        add(lb1);
        add(tf1);
        add(lb2);
        add(tf2);
        add(b1);
        add(result);

        b1.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                int n1,n2;
                n1=Integer.parseInt(tf1.getText());
                n2=Integer.parseInt(tf2.getText());
                result.setText(Integer.toString((n1+n2)));
            }
        });
    }
    public static void main(String [] args)
    {
        SwingFrame frm=new SwingFrame();
    }
}
