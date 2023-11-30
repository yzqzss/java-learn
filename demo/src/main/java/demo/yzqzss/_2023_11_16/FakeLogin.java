package demo.yzqzss._2023_11_16;

import javax.swing.*;
import java.awt.*;
public class FakeLogin extends JFrame{
	JPanel panel_acc,panel_pwd,panel_login_loc,panel_button;
	JLabel jlb_acc,jlb_pwd,jlb_login_loc;
	JComboBox<String> j_combox;                
	JButton jb_OK,jb_CANCLE;
	GridLayout oneR_twoC;
	
	FakeLogin()
	{
		oneR_twoC = new GridLayout(1,2);

		panel_acc=new JPanel();
		panel_acc.setLayout(oneR_twoC);
		panel_pwd=new JPanel();
		panel_pwd.setLayout(oneR_twoC);
		panel_login_loc=new JPanel();
		panel_login_loc.setLayout(oneR_twoC);
		panel_button=new JPanel();
		panel_button.setLayout(oneR_twoC);

		jlb_acc=new JLabel("号码");
        jlb_pwd=new JLabel("登录密码");
        jlb_login_loc=new JLabel("选择登录地点");
		
		String[] arr1={"重庆市","北京市","济南市","成都市","西安市","昆明市","上海市","广州市"};
		j_combox=new JComboBox<String>(arr1);
		
		jb_OK=new JButton("确认");
		jb_CANCLE=new JButton("取消");
		
		JTextField jt_input_qq_acc=new JTextField();
		JTextField jt_input_qq_pwd=new JTextField();

		panel_acc.add(jlb_acc);
		panel_acc.add(jt_input_qq_acc);

		panel_pwd.add(jlb_pwd);
		panel_pwd.add(jt_input_qq_pwd);
		
		panel_login_loc.add(jlb_login_loc);
		panel_login_loc.add(j_combox);

        panel_button.add(jb_OK);
		panel_button.add(jb_CANCLE);

		this.add(panel_acc);
		this.add(panel_pwd);
		this.add(panel_login_loc);
		this.add(panel_button);
		
		this.setLayout(new GridLayout(4,2,0,0));
		
		this.setTitle("登录窗口");
		this.setLocation(250,200);
		this.setSize(550,450);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(true);

		this.setVisible(true);
	}
	public static void main(String[] args) {
		new FakeLogin();
	}
}