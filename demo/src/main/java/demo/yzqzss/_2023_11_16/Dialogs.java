package demo.yzqzss._2023_11_16;

import javax.swing.*;
import java.awt.*;
public class Dialogs extends JFrame {
    Dialogs(){
        JButton goto_comfirmYesCancleDialogButton = new JButton("YES/CANCLE");
        JButton goto_msgDialogButton = new JButton("MSG");
        JButton goto_inputWithYesCancleDialogButton = new JButton("INPUT WITH YES/CANCLE");
        JButton goto_WarningWithYesNoDialogButton = new JButton("WARNING WITH YES/NO");
        goto_comfirmYesCancleDialogButton.addActionListener(e -> {
            JOptionPane.showConfirmDialog(this, "是否删除", "选择对话框", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
        });
        goto_msgDialogButton.addActionListener(e -> {
            JOptionPane.showMessageDialog(this, "注册成功", "消息", JOptionPane.INFORMATION_MESSAGE);
        });
        goto_inputWithYesCancleDialogButton.addActionListener(e -> {
            JOptionPane.showInputDialog(this, "输入要查询的用户名", "输入", JOptionPane.YES_NO_CANCEL_OPTION);
        });
        goto_WarningWithYesNoDialogButton.addActionListener(e -> {
            JOptionPane.showConfirmDialog(this, "本学期只剩114514周", "警告", JOptionPane.YES_NO_OPTION, JOptionPane.WARNING_MESSAGE);
        });
        this.add(goto_comfirmYesCancleDialogButton);
        this.add(goto_msgDialogButton);
        this.add(goto_inputWithYesCancleDialogButton);
        this.add(goto_WarningWithYesNoDialogButton);
        this.setLayout(new GridLayout(2, 2));
        this.setSize(400, 400);
        this.setLocation(200, 200);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }
    public static void main(String[] args) {
        new Dialogs();
    }
}
                                                                                                                                                                    