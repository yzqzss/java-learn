package demo.yzqzss._2023_11_23;

import javax.swing.*;
import java.awt.*;
// import java.util.HashSet;

public class FakeLoginV2 extends JFrame{
    JPanel panel_acc,panel_pwd,panel_button;
    JLabel jlb_acc,jlb_pwd;
    JButton jb_OK,jb_CANCLE;
    FlowLayout oneR_twoC;

    // {(acc, hash(pwd)), ...}
    // acc: String
    // hash(pwd): char[]

    
    static char[] StupidHash(char[] password) {
        char[] hash = new char[password.length];
        for (int i = 0; i < password.length; i++) {
            hash[i] = (char) (password[i] ^ 0x6);
        }
        return hash;
    }

    // boolean IsPwdCorrect(String acc, char[] password) {
    //     return users.contains(new Pair(acc, StupidHash(password)));
    // }

	FakeLoginV2()
	{
		oneR_twoC = new FlowLayout(FlowLayout.LEFT);

		panel_acc=new JPanel();
		panel_acc.setLayout(oneR_twoC);
		panel_pwd=new JPanel();
		panel_pwd.setLayout(oneR_twoC);
		panel_button=new JPanel();
		panel_button.setLayout(oneR_twoC);

		jlb_acc=new JLabel("学号: ");
        jlb_pwd=new JLabel("密码: ");

        JTextField jt_input_qq_acc=new JTextField(10);
        jt_input_qq_acc.setPreferredSize(new Dimension(0, 100));
		JPasswordField jt_input_qq_pwd=new JPasswordField(10);

		
		jb_OK=new JButton("确认");
        jb_OK.addActionListener(e -> {
            if ("admin".equals(jt_input_qq_acc.getText())
             && "admin".equals(new String(jt_input_qq_pwd.getPassword()))
            ) {
                JOptionPane.showMessageDialog(
                    this,
                    "登录成功"+"\nuser: "+jt_input_qq_acc.getText()+"\nname",// TODO: name
                    getTitle(),
                    JOptionPane.INFORMATION_MESSAGE
                );
                System.exit(0); 
            }
            JOptionPane.showMessageDialog(this, "登录失败", getTitle(), JOptionPane.INFORMATION_MESSAGE);
        });
		jb_CANCLE=new JButton("取消");
        jb_CANCLE.addActionListener(e -> {
            // 是退出, 否 noting
            int result = JOptionPane.showConfirmDialog(this, "是否退出", getTitle(), JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
            if (result == JOptionPane.YES_OPTION) {
                System.exit(0);
            }
        });

		panel_acc.add(jlb_acc);
		panel_acc.add(jt_input_qq_acc);

		panel_pwd.add(jlb_pwd);
		panel_pwd.add(jt_input_qq_pwd);
		

        panel_button.add(jb_OK);
		panel_button.add(jb_CANCLE);

		this.add(panel_acc);
		this.add(panel_pwd);
		this.add(panel_button);
		
		this.setLayout(new GridLayout(4,2,0,0));
		
		this.setTitle("登录");
		this.setLocation(250,200);
		this.setSize(550,450);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(true);

		this.setVisible(true);
	}
	public static void main(String[] args) {
        System.out.println(StupidHash("admin".toCharArray()));
		new FakeLoginV2();
	}
}