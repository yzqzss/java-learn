package demo.yzqzss._2023_10_06;

import java.awt.event.*;
import javax.swing.*;

public class SimpleGui extends JFrame {
    JButton B;
    L l = new L();

    SimpleGui() {
        B = new JButton("hello");
        B.addActionListener(l);
        setVisible(true);
        setBounds(100, 300, 1000, 1000);
        add(B);
    }

    public static void main(String[] args) {
        new SimpleGui();
    }

    class L implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (B.getText() == "hello") {
                B.setText("OK");
            } else {
                B.setText("hello");
            }
        }
    }
}
