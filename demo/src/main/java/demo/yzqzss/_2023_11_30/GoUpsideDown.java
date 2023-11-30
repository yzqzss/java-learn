package demo.yzqzss._2023_11_30;

import javax.swing.*;
import java.awt.*;
import java.util.regex.Pattern;

public class GoUpsideDown extends JFrame{
    JPanel jp_lower, jp_upper, jp_bottom;
    JButton convert, cancle;
    JLabel jl_lower, jl_upper;
    JTextField jt_lower, jt_upper;

    FlowLayout oneR_twoC;

    // unused
    static boolean IsASCIILowerCase(char c) {
        return c >= 'a' && c <= 'z';
    }
    static boolean IsASCIIUpperCase(char c) {
        return c >= 'A' && c <= 'Z';
    }

    // regex way
    static boolean IsAllASCIILowerCase(String s) {
        return Pattern.matches("[a-z]*", s);
    }
    // native stupid way
    static boolean IsAllASCIIUpperCase(String s) {
        for (int i = 0; i < s.length(); i++) {
            if (!IsASCIIUpperCase(s.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    GoUpsideDown(){
        oneR_twoC = new FlowLayout(FlowLayout.CENTER);

        jp_lower = new JPanel(oneR_twoC);
        jl_lower = new JLabel("lower: ");
        jt_lower = new JTextField(15);
        jp_lower.add(jl_lower);
        jp_lower.add(jt_lower);

        jp_upper = new JPanel(oneR_twoC);
        jl_upper = new JLabel("upper: ");
        jt_upper = new JTextField(15);
        jp_upper.add(jl_upper);
        jp_upper.add(jt_upper);

        jp_bottom = new JPanel(oneR_twoC);
        convert = new JButton("Convert");
        cancle = new JButton("Cancle");
        cancle.addActionListener(e -> {
            System.exit(0);
        });
        jp_bottom.add(convert);
        jp_bottom.add(cancle);

        convert.addActionListener(e -> {
            String lower_input_text = jt_lower.getText(); // user inputs
            String upper_input_text = jt_upper.getText();
            if (lower_input_text.length()>0){
                // check the input. all is lower case
                if (!IsAllASCIILowerCase(lower_input_text)) {
                    JOptionPane.showMessageDialog(
                        this,
                        "must [a-z]",
                        getTitle(),
                        JOptionPane.ERROR_MESSAGE
                    );
                    return;
                }

                // convert
                String upper_output_text = lower_input_text.toUpperCase();
                jt_lower.setText("");
                jt_upper.setText(upper_output_text);
            } else if (upper_input_text.length()>0) {
                // same as above, but upper case
                if (!IsAllASCIIUpperCase(upper_input_text)) {
                    JOptionPane.showMessageDialog(
                        this,
                        "must [A-Z]",
                        getTitle(),
                        JOptionPane.ERROR_MESSAGE
                    );
                    return;
                }

                jt_lower.setText(upper_input_text.toLowerCase());
                jt_upper.setText("");
            } else { // .length()==0
                JOptionPane.showMessageDialog(
                    this,
                    "must input one of them",
                    getTitle(),
                    JOptionPane.ERROR_MESSAGE
                );
            }
        });

        this.add(jp_lower);
        this.add(jp_upper);
        this.add(jp_bottom);

        this.setLayout(new GridLayout(0, 1));
        this.setLocation(250,200);
		this.setSize(550,450);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.setVisible(true);
    }

    public static void main(String[] args) {
        new GoUpsideDown();
    }
}